#ifndef ONEFLOW_CORE_OPERATOR_NORMAL_MODEL_UPDATE_OP_H_
#define ONEFLOW_CORE_OPERATOR_NORMAL_MODEL_UPDATE_OP_H_

#include "oneflow/core/operator/model_update_op.h"

namespace oneflow {

class NormalModelUpdateOp final : public ModelUpdtOp {
 public:
  OF_DISALLOW_COPY_AND_MOVE(NormalModelUpdateOp);
  NormalModelUpdateOp() = default;
  ~NormalModelUpdateOp() = default;

  void InferBlobDescs(
      std::function<BlobDesc*(const std::string)> GetBlobDesc4BnInOp,
      const ParallelContext* parallel_ctx) const override {}

 private:
  std::string ibn2lbn(const std::string& input_bn) const override {
    return kPackedBlobName;
  }
  std::string obn2lbn(const std::string& output_bn) const override {
    return kPackedBlobName;
  }
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_OPERATOR_NORMAL_MODEL_UPDATE_OP_H_
