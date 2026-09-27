#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/TriggerContactMonitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TriggerContactMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.add_contactAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::add_contactAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb428654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"add_contactAdded", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.remove_contactAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::remove_contactAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb428704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"remove_contactAdded", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.add_contactRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::add_contactRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4287b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"add_contactRemoved", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.remove_contactRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::remove_contactRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb428864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"remove_contactRemoved", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb428914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::set_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42891c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.AddCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::AddCollider)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb428924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.RemoveCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::RemoveCollider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xb428a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"RemoveCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.ResolveUnassociatedColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::ResolveUnassociatedColliders)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0xb428ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"ResolveUnassociatedColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.RemoveFromUnassociatedColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::RemoveFromUnassociatedColliders)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb429164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"RemoveFromUnassociatedColliders", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.ResolveUnassociatedColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::ResolveUnassociatedColliders)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xb4291bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"ResolveUnassociatedColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.UpdateStayedColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::UpdateStayedColliders)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xb429520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"UpdateStayedColliders", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.IsContacting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::IsContacting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb429a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"IsContacting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor.IsDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::IsDestroyed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb429a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"IsDestroyed", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb429ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_contactAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactAdded;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_contactAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactAdded;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactAdded = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_contactRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactRemoved;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_contactRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactRemoved;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactRemoved = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get__interactionManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionManager_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get__interactionManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionManager_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set__interactionManager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionManager_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_EnteredColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnteredColliders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_EnteredColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnteredColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set_m_EnteredColliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnteredColliders = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_UnorderedInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedInteractables;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_UnorderedInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedInteractables;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set_m_UnorderedInteractables(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedInteractables = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_EnteredUnassociatedColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnteredUnassociatedColliders;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_get_m_EnteredUnassociatedColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnteredUnassociatedColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::__cordl_internal_set_m_EnteredUnassociatedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnteredUnassociatedColliders = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::setStaticF_s_ScratchColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "s_ScratchColliders", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::getStaticF_s_ScratchColliders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "s_ScratchColliders", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::setStaticF_s_ExitedColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "s_ExitedColliders", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::getStaticF_s_ExitedColliders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "s_ExitedColliders", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::add_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"add_contactAdded", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::remove_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"remove_contactAdded", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::add_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"add_contactRemoved", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::remove_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"remove_contactRemoved", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::AddCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::RemoveCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"RemoveCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::ResolveUnassociatedColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"ResolveUnassociatedColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::RemoveFromUnassociatedColliders(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"RemoveFromUnassociatedColliders", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::ResolveUnassociatedColliders(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"ResolveUnassociatedColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::UpdateStayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  stayedColliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"UpdateStayedColliders", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stayedColliders);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::IsContacting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"IsContacting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::IsDestroyed(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {"IsDestroyed", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, col);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor::TriggerContactMonitor()   {
}
