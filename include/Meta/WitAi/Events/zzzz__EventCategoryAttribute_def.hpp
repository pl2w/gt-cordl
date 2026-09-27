#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/EventCategoryAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EventCategoryAttribute)
// Forward declare root types
namespace Meta::WitAi::Events {
class EventCategoryAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::EventCategoryAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::EventCategoryAttribute*, "Meta.WitAi.Events", "EventCategoryAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = true)]
// Dependencies UnityEngine.PropertyAttribute
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.EventCategoryAttribute
class CORDL_TYPE EventCategoryAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field Category, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Category, put=__cordl_internal_set_Category)) ::StringW  Category;

static inline ::Meta::WitAi::Events::EventCategoryAttribute* New_ctor(::StringW  category) ;

constexpr ::StringW const& __cordl_internal_get_Category() const;

constexpr ::StringW& __cordl_internal_get_Category() ;

constexpr void __cordl_internal_set_Category(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e94eb4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  category) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventCategoryAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventCategoryAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCategoryAttribute(EventCategoryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCategoryAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCategoryAttribute(EventCategoryAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25670};

/// @brief Field Category, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Category;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::EventCategoryAttribute, ___Category) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::EventCategoryAttribute) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
