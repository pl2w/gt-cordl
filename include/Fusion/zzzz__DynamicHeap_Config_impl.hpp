#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Config.hpp"
#include "Fusion/zzzz__DynamicHeap_Config_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_Config.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Config (*)()>(&::GlobalNamespace::DynamicHeap_Config::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_Config>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DynamicHeap_Config GlobalNamespace::DynamicHeap_Config::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_Config>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Config>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "BlockPageCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Config::DynamicHeap_Config(int32_t  BlockPageCount) noexcept  {
this->BlockPageCount = BlockPageCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Config::DynamicHeap_Config()   {
}
