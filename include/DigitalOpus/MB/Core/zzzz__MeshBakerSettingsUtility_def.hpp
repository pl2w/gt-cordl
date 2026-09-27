#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MeshBakerSettingsUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MeshBakerSettingsUtility)
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshVertexChannelFlags;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MeshBakerSettingsUtility;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MeshBakerSettingsUtility*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MeshBakerSettingsUtility*, "DigitalOpus.MB.Core", "MeshBakerSettingsUtility");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MeshBakerSettingsUtility
class CORDL_TYPE MeshBakerSettingsUtility : public ::System::Object {
public:
// Declarations
/// @brief Method DoUV2getDataFromSourceMeshes, addr 0x9dbdfcc, size 0x18c, virtual false, abstract: false, final false
static inline bool DoUV2getDataFromSourceMeshes(::by_ref<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>  settings) ;

/// @brief Method GetMeshChannelsAsFlags, addr 0x9dbd9c0, size 0x60c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags GetMeshChannelsAsFlags(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, bool  doVerts, bool  uvsSliceIdx_w) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshBakerSettingsUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshBakerSettingsUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshBakerSettingsUtility(MeshBakerSettingsUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshBakerSettingsUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshBakerSettingsUtility(MeshBakerSettingsUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MeshBakerSettingsUtility) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
