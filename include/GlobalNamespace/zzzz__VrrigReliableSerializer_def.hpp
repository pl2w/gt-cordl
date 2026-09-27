#pragma once
// IWYU pragma private; include "GlobalNamespace/VrrigReliableSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
CORDL_MODULE_EXPORT(VrrigReliableSerializer)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VrrigReliableSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VrrigReliableSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VrrigReliableSerializer*, "", "VrrigReliableSerializer");
// [NetworkBehaviourWeaved(0)]
// Dependencies GorillaWrappedSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: VrrigReliableSerializer
class CORDL_TYPE VrrigReliableSerializer : public ::GlobalNamespace::GorillaWrappedSerializer {
public:
// Declarations
/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x58fe4bc, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x58fe4c0, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::VrrigReliableSerializer* New_ctor() ;

/// @brief Method OnBeforeDespawn, addr 0x58fe32c, size 0x4, virtual true, abstract: false, final false
inline void OnBeforeDespawn() ;

/// @brief Method OnFailedSpawn, addr 0x58fe330, size 0x4, virtual true, abstract: false, final false
inline void OnFailedSpawn() ;

/// @brief Method OnSpawnSetupCheck, addr 0x58fe334, size 0x17c, virtual true, abstract: false, final false
inline bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType) ;

/// @brief Method OnSuccesfullySpawned, addr 0x58fe4b0, size 0x4, virtual true, abstract: false, final false
inline void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method .ctor, addr 0x58fe4b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VrrigReliableSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VrrigReliableSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VrrigReliableSerializer(VrrigReliableSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VrrigReliableSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VrrigReliableSerializer(VrrigReliableSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VrrigReliableSerializer) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
