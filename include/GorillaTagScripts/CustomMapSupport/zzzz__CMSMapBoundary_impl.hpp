#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSMapBoundary.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSMapBoundary_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary.CopyTriggerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::*)(::GT_CustomMapSupportRuntime::TriggerSettings*)>(&::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::CopyTriggerSettings)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5bd86a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::Trigger)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5bd8b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bd8d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_get_TeleportPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_get_TeleportPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportPoints = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_get_ShouldTagPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTagPlayer;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_get_ShouldTagPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTagPlayer;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSMapBoundary::__cordl_internal_set_ShouldTagPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldTagPlayer = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSMapBoundary::CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::CustomMapSupport::CMSMapBoundary::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSMapBoundary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary* GorillaTagScripts::CustomMapSupport::CMSMapBoundary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary::CMSMapBoundary()   {
}
