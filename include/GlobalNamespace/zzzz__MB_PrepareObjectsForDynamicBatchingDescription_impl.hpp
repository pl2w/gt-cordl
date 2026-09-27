#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_PrepareObjectsForDynamicBatchingDescription.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_PrepareObjectsForDynamicBatchingDescription_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::*)()>(&::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dfcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::*)()>(&::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfcd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription* GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription::MB_PrepareObjectsForDynamicBatchingDescription()   {
}
