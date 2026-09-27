#pragma once
// IWYU pragma private; include "Meta/WitAi/ComponentExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(ComponentExtensions)
namespace GlobalNamespace {
struct ComponentExtensions_ComponentCopyData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi {
class ComponentExtensions;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ComponentExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ComponentExtensions*, "Meta.WitAi", "ComponentExtensions");
// [Extension]
// Dependencies System.Attribute, System.Object, UnityEngine.Component
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ComponentExtensions
class CORDL_TYPE ComponentExtensions : public ::System::Object {
public:
// Declarations
using ComponentCopyData = ::GlobalNamespace::ComponentExtensions_ComponentCopyData;

/// @brief Field _data, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__data, put=setStaticF__data)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*  _data;

/// [Extension]
/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void Copy(T  toComponent, T  fromComponent) ;

/// [Extension]
/// @brief Method GetCopyData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::GlobalNamespace::ComponentExtensions_ComponentCopyData GetCopyData(T  thisComponent) ;

/// @brief Method HasCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
static inline bool HasCustomAttributes(::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*  attributes) ;

/// @brief Method IsObsolete, addr 0x9e3bf6c, size 0x6c, virtual false, abstract: false, final false
static inline bool IsObsolete(::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*  attributes) ;

/// [Extension]
/// @brief Method PreloadCopyData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void PreloadCopyData(T  thisComponent) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>* getStaticF__data() ;

static inline void setStaticF__data(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentExtensions(ComponentExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentExtensions(ComponentExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::ComponentExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
