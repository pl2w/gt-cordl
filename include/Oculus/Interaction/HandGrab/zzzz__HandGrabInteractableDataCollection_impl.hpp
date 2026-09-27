#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteractableDataCollection.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractableDataCollection_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabInteractableData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection.get_InteractablesData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>* (::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::get_InteractablesData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4deb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {"get_InteractablesData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection.StoreInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::*)(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::StoreInteractables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4deb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {"StoreInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4deb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*& Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::__cordl_internal_get__interactablesData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactablesData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>* const& Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::__cordl_internal_get__interactablesData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactablesData;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::__cordl_internal_set__interactablesData(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactablesData = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>* Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::get_InteractablesData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {"get_InteractablesData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::StoreInteractables(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  interactablesData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {"StoreInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactablesData);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection* Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::HandGrabInteractableDataCollection()   {
}
