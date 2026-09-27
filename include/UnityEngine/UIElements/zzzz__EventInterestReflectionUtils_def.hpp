#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestReflectionUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventInterestReflectionUtils)
namespace GlobalNamespace {
struct EventInterestReflectionUtils_DefaultEventInterests;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct EventCategory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventInterestReflectionUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::EventInterestReflectionUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventInterestReflectionUtils*, "UnityEngine.UIElements", "EventInterestReflectionUtils");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventInterestReflectionUtils
class CORDL_TYPE EventInterestReflectionUtils : public ::System::Object {
public:
// Declarations
using DefaultEventInterests = ::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests;

/// @brief Field s_DefaultEventInterests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultEventInterests, put=setStaticF_s_DefaultEventInterests)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests>*  s_DefaultEventInterests;

/// @brief Field s_EventCategories, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EventCategories, put=setStaticF_s_EventCategories)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::UIElements::EventCategory>*  s_EventCategories;

/// @brief Method ComputeDefaultEventInterests, addr 0xb7c34d4, size 0x1f8, virtual false, abstract: false, final false
static inline int32_t ComputeDefaultEventInterests(::System::Type*  elementType, ::StringW  methodName) ;

/// @brief Method GetDefaultEventInterests, addr 0xb7c31ec, size 0x2e8, virtual false, abstract: false, final false
static inline void GetDefaultEventInterests(::System::Type*  elementType, ::by_ref<int32_t>  defaultActionCategories, ::by_ref<int32_t>  defaultActionAtTargetCategories, ::by_ref<int32_t>  handleEventTrickleDownCategories, ::by_ref<int32_t>  handleEventBubbleUpCategories) ;

/// @brief Method GetEventCategory, addr 0xb7c36cc, size 0x200, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::EventCategory GetEventCategory(::System::Type*  eventType) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests>* getStaticF_s_DefaultEventInterests() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::UIElements::EventCategory>* getStaticF_s_EventCategories() ;

static inline void setStaticF_s_DefaultEventInterests(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests>*  value) ;

static inline void setStaticF_s_EventCategories(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::UIElements::EventCategory>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventInterestReflectionUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventInterestReflectionUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventInterestReflectionUtils(EventInterestReflectionUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventInterestReflectionUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventInterestReflectionUtils(EventInterestReflectionUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::EventInterestReflectionUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
