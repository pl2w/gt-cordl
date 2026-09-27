#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckQualitySelector.hpp"
#include "Liv/Lck/zzzz__QualityOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckQualitySelector_def.hpp"
#include "Liv/Lck/UI/zzzz__LckQualitySelector_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector.InitializeOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector::*)(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*)>(&::Liv::Lck::UI::LckQualitySelector::InitializeOptions)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d50c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"InitializeOptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector.GoToNextOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector::*)()>(&::Liv::Lck::UI::LckQualitySelector::GoToNextOption)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d50e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"GoToNextOption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector.UpdateCurrentTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector::*)(int32_t)>(&::Liv::Lck::UI::LckQualitySelector::UpdateCurrentTrackDescriptor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d50d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"UpdateCurrentTrackDescriptor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector.SetQualityButtonIsDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector::*)(bool)>(&::Liv::Lck::UI::LckQualitySelector::SetQualityButtonIsDisabledState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d50ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"SetQualityButtonIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector::*)()>(&::Liv::Lck::UI::LckQualitySelector::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d50f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::Liv::Lck::QualityOption& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__currentQualityOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentQualityOption;
}
constexpr ::Liv::Lck::QualityOption const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__currentQualityOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentQualityOption;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__currentQualityOption(::Liv::Lck::QualityOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentQualityOption = value;
}
constexpr int32_t& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__currentQualityIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentQualityIndex;
}
constexpr int32_t const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__currentQualityIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentQualityIndex;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__currentQualityIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentQualityIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__qualityOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityOptions;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__qualityOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityOptions;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__qualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityOptions = value;
}
constexpr ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get_OnQualityOptionSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQualityOptionSelected;
}
constexpr ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get_OnQualityOptionSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQualityOptionSelected;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set_OnQualityOptionSelected(::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnQualityOptionSelected = value;
}
constexpr ::System::Action_1<::Liv::Lck::QualityOption>*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get_OnQualityOptionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQualityOptionChanged;
}
constexpr ::System::Action_1<::Liv::Lck::QualityOption>* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get_OnQualityOptionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQualityOptionChanged;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set_OnQualityOptionChanged(::System::Action_1<::Liv::Lck::QualityOption>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnQualityOptionChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__onQualityOptionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onQualityOptionChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__onQualityOptionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onQualityOptionChanged;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__onQualityOptionChanged(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onQualityOptionChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__onSetQualityButtonIsDisabledState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSetQualityButtonIsDisabledState;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Liv::Lck::UI::LckQualitySelector::__cordl_internal_get__onSetQualityButtonIsDisabledState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSetQualityButtonIsDisabledState;
}
constexpr void Liv::Lck::UI::LckQualitySelector::__cordl_internal_set__onSetQualityButtonIsDisabledState(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSetQualityButtonIsDisabledState = value;
}
inline void Liv::Lck::UI::LckQualitySelector::InitializeOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  qualityOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"InitializeOptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityOptions);
}
inline void Liv::Lck::UI::LckQualitySelector::GoToNextOption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"GoToNextOption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckQualitySelector::UpdateCurrentTrackDescriptor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"UpdateCurrentTrackDescriptor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Liv::Lck::UI::LckQualitySelector::SetQualityButtonIsDisabledState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {"SetQualityButtonIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::UI::LckQualitySelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckQualitySelector* Liv::Lck::UI::LckQualitySelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckQualitySelector*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckQualitySelector::LckQualitySelector()   {
}
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckQualitySelector___c::*)()>(&::Liv::Lck::UI::LckQualitySelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d51040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckQualitySelector___c._InitializeOptions_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckQualitySelector___c::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::UI::LckQualitySelector___c::_InitializeOptions_b__8_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d51048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector___c*>(),
                        {"<InitializeOptions>b__8_0", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::UI::LckQualitySelector___c::setStaticF___9(::Liv::Lck::UI::LckQualitySelector___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::UI::LckQualitySelector___c*, "<>9", ::Liv::Lck::UI::LckQualitySelector___c*>(std::forward<::Liv::Lck::UI::LckQualitySelector___c*>(value));
}
inline ::Liv::Lck::UI::LckQualitySelector___c* Liv::Lck::UI::LckQualitySelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::UI::LckQualitySelector___c*, "<>9", ::Liv::Lck::UI::LckQualitySelector___c*>();
}
inline void Liv::Lck::UI::LckQualitySelector___c::setStaticF___9__8_0(::System::Predicate_1<::Liv::Lck::QualityOption>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Liv::Lck::QualityOption>*, "<>9__8_0", ::Liv::Lck::UI::LckQualitySelector___c*>(std::forward<::System::Predicate_1<::Liv::Lck::QualityOption>*>(value));
}
inline ::System::Predicate_1<::Liv::Lck::QualityOption>* Liv::Lck::UI::LckQualitySelector___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Liv::Lck::QualityOption>*, "<>9__8_0", ::Liv::Lck::UI::LckQualitySelector___c*>();
}
inline void Liv::Lck::UI::LckQualitySelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::UI::LckQualitySelector___c::_InitializeOptions_b__8_0(::Liv::Lck::QualityOption  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckQualitySelector___c*>(),
                        {"<InitializeOptions>b__8_0", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Liv::Lck::UI::LckQualitySelector___c* Liv::Lck::UI::LckQualitySelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckQualitySelector___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckQualitySelector___c::LckQualitySelector___c()   {
}
