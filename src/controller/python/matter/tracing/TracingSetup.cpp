#include <controller/python/matter/native/ChipMainLoopWork.h>
#include <controller/python/matter/native/PyChipError.h>
extern "C" void pychip_tracing_start_json_log() {}
extern "C" PyChipError pychip_tracing_start_json_file(const char * file_name) { return ToPyChipError(CHIP_NO_ERROR); }
extern "C" void pychip_tracing_start_perfetto_system() {}
extern "C" PyChipError pychip_tracing_start_perfetto_file(const char * file_name) { return ToPyChipError(CHIP_NO_ERROR); }
extern "C" void pychip_tracing_stop() {}
