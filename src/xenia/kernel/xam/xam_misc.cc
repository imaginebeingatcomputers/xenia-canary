
#include "xenia/base/logging.h"
#include "xenia/kernel/kernel_state.h"
#include "xenia/kernel/util/shim_utils.h"
#include "xenia/kernel/xam/xam_private.h"
#include "xenia/xbox.h"

namespace xe {
namespace kernel {
namespace xam {

dword_result_t XamDoesOmniNeedConfiguration() {
  return 0;
}
DECLARE_XAM_EXPORT1(XamDoesOmniNeedConfiguration, kMisc, kStub);

dword_result_t XamFirstRunExperienceShouldRun() {
    return 0;
}
DECLARE_XAM_EXPORT1(XamFirstRunExperienceShouldRun, kMisc, kStub);

void RegisterMiscExports(xe::cpu::ExportResolver* export_resolver,
                           KernelState* kernel_state) {}
}  // namespace xam
}  // namespace kernel
}  // namespace xe