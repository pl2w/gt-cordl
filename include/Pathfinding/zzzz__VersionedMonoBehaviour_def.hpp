#pragma once
// IWYU pragma private; include "Pathfinding/VersionedMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VersionedMonoBehaviour)
namespace Pathfinding {
class IVersionedMonoBehaviourInternal;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Pathfinding {
class VersionedMonoBehaviour;
}
// Write type traits
MARK_REF_T(::Pathfinding::VersionedMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::Pathfinding::VersionedMonoBehaviour*, "Pathfinding", "VersionedMonoBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.VersionedMonoBehaviour
class CORDL_TYPE VersionedMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field version, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::Pathfinding::IVersionedMonoBehaviourInternal"
constexpr operator  ::Pathfinding::IVersionedMonoBehaviourInternal*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Awake, addr 0x5ea698c, size 0x78, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::VersionedMonoBehaviour* New_ctor() ;

/// @brief Method OnUpgradeSerializedData, addr 0x5eab5e0, size 0x8, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method Pathfinding.IVersionedMonoBehaviourInternal.UpgradeFromUnityThread, addr 0x5eab5e8, size 0x60, virtual true, abstract: false, final true
inline void Pathfinding_IVersionedMonoBehaviourInternal_UpgradeFromUnityThread() ;

/// @brief Method Reset, addr 0x5eab588, size 0x28, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x5eab5b4, size 0x2c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x5eab5b0, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e9ce24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Pathfinding::IVersionedMonoBehaviourInternal"
constexpr ::Pathfinding::IVersionedMonoBehaviourInternal* i___Pathfinding__IVersionedMonoBehaviourInternal() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionedMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionedMonoBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionedMonoBehaviour(VersionedMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionedMonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionedMonoBehaviour(VersionedMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21388};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field version, offset: 0x20, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::VersionedMonoBehaviour, ___version) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::VersionedMonoBehaviour) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
