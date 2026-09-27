#pragma once
// IWYU pragma private; include "GlobalNamespace/iUpgadeableTool.hpp"
#include "GlobalNamespace/zzzz__iUpgadeableTool_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::iUpgadeableTool.UnlockPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::iUpgadeableTool::*)(::StringW)>(&::GlobalNamespace::iUpgadeableTool::UnlockPart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::iUpgadeableTool*>(),
                    {::i2c::class_of<::GlobalNamespace::iUpgadeableTool*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::iUpgadeableTool::UnlockPart(::StringW  ModId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::iUpgadeableTool*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ModId);
}
