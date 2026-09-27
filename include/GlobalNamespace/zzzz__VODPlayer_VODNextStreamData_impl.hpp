#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODNextStreamData.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODNextStreamData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODNextStreamData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer_VODNextStreamData::*)(::StringW, ::System::DateTime)>(&::GlobalNamespace::VODPlayer_VODNextStreamData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d043f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODNextStreamData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VODPlayer_VODNextStreamData::_ctor(::StringW  title, ::System::DateTime  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODNextStreamData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, title, startTime);
}
// Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StartTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData::VODPlayer_VODNextStreamData(::StringW  Title, ::System::DateTime  StartTime) noexcept  {
this->Title = Title;
this->StartTime = StartTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData::VODPlayer_VODNextStreamData()   {
}
