#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSettingsSectionGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSettingsSectionGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__SettingsSectionController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSettingsSectionGroup.EvaluateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSettingsSectionGroup::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::GtSettingsSectionGroup::EvaluateMode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d2c79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSettingsSectionGroup*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSettingsSectionGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSettingsSectionGroup::*)()>(&::Liv::Lck::GorillaTag::GtSettingsSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSettingsSectionGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*& Liv::Lck::GorillaTag::GtSettingsSectionGroup::__cordl_internal_get__sections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sections;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>* const& Liv::Lck::GorillaTag::GtSettingsSectionGroup::__cordl_internal_get__sections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sections;
}
constexpr void Liv::Lck::GorillaTag::GtSettingsSectionGroup::__cordl_internal_set__sections(::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::SettingsSectionController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sections = value;
}
inline void Liv::Lck::GorillaTag::GtSettingsSectionGroup::EvaluateMode(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSettingsSectionGroup*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::GorillaTag::GtSettingsSectionGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSettingsSectionGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtSettingsSectionGroup* Liv::Lck::GorillaTag::GtSettingsSectionGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtSettingsSectionGroup*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtSettingsSectionGroup::GtSettingsSectionGroup()   {
}
