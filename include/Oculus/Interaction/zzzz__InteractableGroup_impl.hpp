#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableGroup_InteractableLimits_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::System::Object*)>(&::Oculus::Interaction::InteractableGroup::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4149f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::Start)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa414b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::OnEnable)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xa414e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::OnDisable)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xa4155ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.UpdateInteractorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::UpdateInteractorCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa41522c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateInteractorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.UpdateSelectingInteractorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::UpdateSelectingInteractorCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa41540c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateSelectingInteractorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.HandleInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroup::HandleInteractorViewAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa415e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.HandleInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroup::HandleInteractorViewRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa415e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.HandleSelectingInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroup::HandleSelectingInteractorViewAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa415e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleSelectingInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.HandleSelectingInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroup::HandleSelectingInteractorViewRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa415e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleSelectingInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.UpdateMaxInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::UpdateMaxInteractors)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa4159d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateMaxInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.UpdateMaxSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::UpdateMaxSelecting)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa415c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateMaxSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.InjectAllInteractableGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*)>(&::Oculus::Interaction::InteractableGroup::InjectAllInteractableGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa415e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectAllInteractableGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.InjectInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*)>(&::Oculus::Interaction::InteractableGroup::InjectInteractables)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa415e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup.InjectOptionalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)(::System::Object*)>(&::Oculus::Interaction::InteractableGroup::InjectOptionalData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa415f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup::*)()>(&::Oculus::Interaction::InteractableGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa416050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::InteractableGroup::__cordl_internal_get__interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__interactables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactables = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*& Oculus::Interaction::InteractableGroup::__cordl_internal_get_Interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactables;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>* const& Oculus::Interaction::InteractableGroup::__cordl_internal_get_Interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactables;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set_Interactables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactables = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*& Oculus::Interaction::InteractableGroup::__cordl_internal_get__limits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>* const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__limits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limits;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__limits(::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____limits = value;
}
constexpr int32_t& Oculus::Interaction::InteractableGroup::__cordl_internal_get__maxInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInteractors;
}
constexpr int32_t const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__maxInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInteractors;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__maxInteractors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxInteractors = value;
}
constexpr int32_t& Oculus::Interaction::InteractableGroup::__cordl_internal_get__maxSelectingInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSelectingInteractors;
}
constexpr int32_t const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__maxSelectingInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSelectingInteractors;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__maxSelectingInteractors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSelectingInteractors = value;
}
constexpr int32_t& Oculus::Interaction::InteractableGroup::__cordl_internal_get__interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr int32_t const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__interactors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactors = value;
}
constexpr int32_t& Oculus::Interaction::InteractableGroup::__cordl_internal_get__selectInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectInteractors;
}
constexpr int32_t const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__selectInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectInteractors;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__selectInteractors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectInteractors = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractableGroup::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::System::Object*& Oculus::Interaction::InteractableGroup::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::System::Object* const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__Data_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::InteractableGroup::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::InteractableGroup::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::InteractableGroup::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::System::Object* Oculus::Interaction::InteractableGroup::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::set_Data(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroup::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::UpdateInteractorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateInteractorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::UpdateSelectingInteractorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateSelectingInteractorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::HandleInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::InteractableGroup::HandleInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::InteractableGroup::HandleSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleSelectingInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::InteractableGroup::HandleSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"HandleSelectingInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::InteractableGroup::UpdateMaxInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateMaxInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::UpdateMaxSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"UpdateMaxSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroup::InjectAllInteractableGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectAllInteractableGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactables);
}
inline void Oculus::Interaction::InteractableGroup::InjectInteractables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactables);
}
inline void Oculus::Interaction::InteractableGroup::InjectOptionalData(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::InteractableGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableGroup* Oculus::Interaction::InteractableGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableGroup*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableGroup::InteractableGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroup___c::*)()>(&::Oculus::Interaction::InteractableGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4160c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup___c._Awake_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractable* (::Oculus::Interaction::InteractableGroup___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::InteractableGroup___c::_Awake_b__14_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4160c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {"<Awake>b__14_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroup___c._InjectInteractables_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::InteractableGroup___c::*)(::Oculus::Interaction::IInteractable*)>(&::Oculus::Interaction::InteractableGroup___c::_InjectInteractables_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa416110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {"<InjectInteractables>b__27_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractableGroup___c::setStaticF___9(::Oculus::Interaction::InteractableGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractableGroup___c*, "<>9", ::Oculus::Interaction::InteractableGroup___c*>(std::forward<::Oculus::Interaction::InteractableGroup___c*>(value));
}
inline ::Oculus::Interaction::InteractableGroup___c* Oculus::Interaction::InteractableGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractableGroup___c*, "<>9", ::Oculus::Interaction::InteractableGroup___c*>();
}
inline void Oculus::Interaction::InteractableGroup___c::setStaticF___9__14_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*, "<>9__14_0", ::Oculus::Interaction::InteractableGroup___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>* Oculus::Interaction::InteractableGroup___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*, "<>9__14_0", ::Oculus::Interaction::InteractableGroup___c*>();
}
inline void Oculus::Interaction::InteractableGroup___c::setStaticF___9__27_0(::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*, "<>9__27_0", ::Oculus::Interaction::InteractableGroup___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::InteractableGroup___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*, "<>9__27_0", ::Oculus::Interaction::InteractableGroup___c*>();
}
inline void Oculus::Interaction::InteractableGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IInteractable* Oculus::Interaction::InteractableGroup___c::_Awake_b__14_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {"<Awake>b__14_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractable*>(this, ___internal_method, mono);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::InteractableGroup___c::_InjectInteractables_b__27_0(::Oculus::Interaction::IInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroup___c*>(),
                        {"<InjectInteractables>b__27_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, interactable);
}
inline ::Oculus::Interaction::InteractableGroup___c* Oculus::Interaction::InteractableGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableGroup___c::InteractableGroup___c()   {
}
