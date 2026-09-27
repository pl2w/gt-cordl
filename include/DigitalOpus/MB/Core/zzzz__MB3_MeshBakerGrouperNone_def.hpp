#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperNone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouperNone)
namespace DigitalOpus::MB::Core {
class GrouperData;
}
namespace GlobalNamespace {
struct MB3_MeshBakerGrouper_ClusterType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperNone;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperNone");
// Dependencies DigitalOpus.MB.Core.MB3_MeshBakerGrouperBehaviour
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperNone
class CORDL_TYPE MB3_MeshBakerGrouperNone : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour {
public:
// Declarations
/// @brief Method DrawGizmos, addr 0x9defb38, size 0x4, virtual true, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method FilterIntoGroups, addr 0x9def8bc, size 0x27c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method GetClusterType, addr 0x9defb3c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType GetClusterType() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone* New_ctor() ;

/// @brief Method .ctor, addr 0x9defb44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperNone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperNone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperNone(MB3_MeshBakerGrouperNone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperNone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperNone(MB3_MeshBakerGrouperNone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22841};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
