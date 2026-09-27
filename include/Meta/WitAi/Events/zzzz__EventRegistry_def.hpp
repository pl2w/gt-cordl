#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/EventRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EventRegistry)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class EventRegistry;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::EventRegistry*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::EventRegistry*, "Meta.WitAi.Events", "EventRegistry");
// Dependencies System.Object
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.EventRegistry
class CORDL_TYPE EventRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field _overriddenCallbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__overriddenCallbacks, put=__cordl_internal_set__overriddenCallbacks)) ::System::Collections::Generic::HashSet_1<::StringW>*  _overriddenCallbacks;

static inline ::Meta::WitAi::Events::EventRegistry* New_ctor() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__overriddenCallbacks() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__overriddenCallbacks() ;

constexpr void __cordl_internal_set__overriddenCallbacks(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e94ee4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventRegistry(EventRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventRegistry(EventRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25671};

/// [SerializeField]
/// @brief Field _overriddenCallbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____overriddenCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::EventRegistry, ____overriddenCallbacks) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::EventRegistry) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
