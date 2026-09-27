#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_DeferredKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_DeferredKey)
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_DeferredKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_DeferredKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_DeferredKey, "", "OVRAnchor/DeferredKey");
// Dependencies OVRPlugin::SpaceComponentType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/DeferredKey
struct CORDL_TYPE OVRAnchor_DeferredKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*() ;

/// @brief Method Equals, addr 0xa56d13c, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa56d118, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRAnchor_DeferredKey  other) ;

/// @brief Method FromEvent, addr 0xa56b5d8, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRAnchor_DeferredKey FromEvent(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData  eventData) ;

/// @brief Method GetHashCode, addr 0xa56d1c4, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_DeferredKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_DeferredKey() ;

// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_DeferredKey(uint64_t  Space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field ComponentType, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredKey, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredKey, ComponentType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_DeferredKey) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
