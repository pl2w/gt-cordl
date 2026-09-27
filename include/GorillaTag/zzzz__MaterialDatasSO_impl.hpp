#pragma once
// IWYU pragma private; include "GorillaTag/MaterialDatasSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/zzzz__MaterialDatasSO_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MaterialData_def.hpp"
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTag::MaterialDatasSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MaterialDatasSO::*)()>(&::GorillaTag::MaterialDatasSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MaterialDatasSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*& GorillaTag::MaterialDatasSO::__cordl_internal_get_datas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datas;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>* const& GorillaTag::MaterialDatasSO::__cordl_internal_get_datas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datas;
}
constexpr void GorillaTag::MaterialDatasSO::__cordl_internal_set_datas(::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___datas = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*& GorillaTag::MaterialDatasSO::__cordl_internal_get_surfaceEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffects;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>* const& GorillaTag::MaterialDatasSO::__cordl_internal_get_surfaceEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffects;
}
constexpr void GorillaTag::MaterialDatasSO::__cordl_internal_set_surfaceEffects(::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceEffects = value;
}
inline void GorillaTag::MaterialDatasSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MaterialDatasSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::MaterialDatasSO* GorillaTag::MaterialDatasSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::MaterialDatasSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::MaterialDatasSO::MaterialDatasSO()   {
}
