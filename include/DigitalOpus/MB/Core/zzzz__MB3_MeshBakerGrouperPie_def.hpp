#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperPie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouperPie)
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperPie;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperPie");
// Dependencies DigitalOpus.MB.Core.MB3_MeshBakerGrouperBehaviour
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperPie
class CORDL_TYPE MB3_MeshBakerGrouperPie : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour {
public:
// Declarations
/// @brief Method DrawCircle, addr 0x9df1458, size 0x364, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  axis, ::UnityEngine::Vector3  center, float_t  radius, int32_t  subdiv) ;

/// @brief Method DrawGizmos, addr 0x9df0ea4, size 0x5b4, virtual true, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method FilterIntoGroups, addr 0x9df0544, size 0x960, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method GetClusterType, addr 0x9df17d8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType GetClusterType() ;

/// @brief Method MaxIndexInVector3, addr 0x9df17bc, size 0x1c, virtual false, abstract: false, final false
static inline int32_t MaxIndexInVector3(::UnityEngine::Vector3  v) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie* New_ctor() ;

/// @brief Method .ctor, addr 0x9df17e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperPie() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperPie", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperPie(MB3_MeshBakerGrouperPie && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperPie", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperPie(MB3_MeshBakerGrouperPie const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
