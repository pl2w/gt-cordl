#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBitOps_BitWriteInfo.hpp"
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTBitOps_BitWriteInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTBitOps_BitWriteInfo::*)(int32_t, int32_t)>(&::GlobalNamespace::GTBitOps_BitWriteInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5676110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTBitOps_BitWriteInfo::_ctor(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clearMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo::GTBitOps_BitWriteInfo(int32_t  index, int32_t  valueMask, int32_t  clearMask) noexcept  {
this->index = index;
this->valueMask = valueMask;
this->clearMask = clearMask;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo::GTBitOps_BitWriteInfo()   {
}
