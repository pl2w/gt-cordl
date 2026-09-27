#pragma once
// IWYU pragma private; include "Pathfinding/IGraphInternals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGraphInternals)
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
struct Progress;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Pathfinding {
class IGraphInternals;
}
// Write type traits
MARK_REF_T(::Pathfinding::IGraphInternals*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IGraphInternals*, "Pathfinding", "IGraphInternals");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IGraphInternals
class CORDL_TYPE IGraphInternals {
public:
// Declarations
 __declspec(property(get=get_SerializedEditorSettings, put=set_SerializedEditorSettings)) ::StringW  SerializedEditorSettings;

/// @brief Method DeserializeExtraInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DestroyAllNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyAllNodes() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroy() ;

/// @brief Method PostDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method ScanInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SerializeExtraInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method get_SerializedEditorSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SerializedEditorSettings() ;

/// @brief Method set_SerializedEditorSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_SerializedEditorSettings(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IGraphInternals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGraphInternals(IGraphInternals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21288};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
