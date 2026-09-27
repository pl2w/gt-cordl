#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/SerializeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializeSettings)
// Forward declare root types
namespace Pathfinding::Serialization {
class SerializeSettings;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::SerializeSettings*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::SerializeSettings*, "Pathfinding.Serialization", "SerializeSettings");
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.SerializeSettings
class CORDL_TYPE SerializeSettings : public ::System::Object {
public:
// Declarations
/// @brief Field editorSettings, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_editorSettings, put=__cordl_internal_set_editorSettings)) bool  editorSettings;

/// @brief Field nodes, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) bool  nodes;

/// @brief Field prettyPrint, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_prettyPrint, put=__cordl_internal_set_prettyPrint)) bool  prettyPrint;

static inline ::Pathfinding::Serialization::SerializeSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_editorSettings() const;

constexpr bool& __cordl_internal_get_editorSettings() ;

constexpr bool const& __cordl_internal_get_nodes() const;

constexpr bool& __cordl_internal_get_nodes() ;

constexpr bool const& __cordl_internal_get_prettyPrint() const;

constexpr bool& __cordl_internal_get_prettyPrint() ;

constexpr void __cordl_internal_set_editorSettings(bool  value) ;

constexpr void __cordl_internal_set_nodes(bool  value) ;

constexpr void __cordl_internal_set_prettyPrint(bool  value) ;

/// @brief Method .ctor, addr 0x5ed232c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Settings, addr 0x5ecdccc, size 0x60, virtual false, abstract: false, final false
static inline ::Pathfinding::Serialization::SerializeSettings* get_Settings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializeSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeSettings(SerializeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeSettings(SerializeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21452};

/// @brief Field nodes, offset: 0x10, size: 0x1, def value: None
 bool  ___nodes;

/// [Obsolete("There is no support for pretty printing the json anymore")]
/// @brief Field prettyPrint, offset: 0x11, size: 0x1, def value: None
 bool  ___prettyPrint;

/// @brief Field editorSettings, offset: 0x12, size: 0x1, def value: None
 bool  ___editorSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::SerializeSettings, ___nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::SerializeSettings, ___prettyPrint) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::SerializeSettings, ___editorSettings) == 0x12, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::SerializeSettings) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
