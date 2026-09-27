#pragma once
// IWYU pragma private; include "Unity/Properties/PathVisitor_PropertyScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PathVisitor_PropertyScope)
namespace System {
class IDisposable;
}
namespace Unity::Properties {
class IProperty;
}
namespace Unity::Properties {
class PathVisitor;
}
// Forward declare root types
namespace GlobalNamespace {
struct PathVisitor_PropertyScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PathVisitor_PropertyScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PathVisitor_PropertyScope, "Unity.Properties", "PathVisitor/PropertyScope");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Properties.PathVisitor/PropertyScope
struct CORDL_TYPE PathVisitor_PropertyScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb698564, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb698514, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Properties::PathVisitor*  visitor, ::Unity::Properties::IProperty*  property) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PathVisitor_PropertyScope() ;

// Ctor Parameters [CppParam { name: "m_Visitor", ty: "::Unity::Properties::PathVisitor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Property", ty: "::Unity::Properties::IProperty*", modifiers: "", def_value: None, comment: None }]
constexpr PathVisitor_PropertyScope(::Unity::Properties::PathVisitor*  m_Visitor, ::Unity::Properties::IProperty*  m_Property) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Visitor, offset: 0x0, size: 0x8, def value: None
 ::Unity::Properties::PathVisitor*  m_Visitor;

/// @brief Field m_Property, offset: 0x8, size: 0x8, def value: None
 ::Unity::Properties::IProperty*  m_Property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PathVisitor_PropertyScope, m_Visitor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PathVisitor_PropertyScope, m_Property) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PathVisitor_PropertyScope) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
