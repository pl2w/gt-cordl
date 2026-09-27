#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonNetwork_RaiseEventBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonNetwork_RaiseEventBatch)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonNetwork_RaiseEventBatch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonNetwork_RaiseEventBatch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonNetwork_RaiseEventBatch, "Photon.Pun", "PhotonNetwork/RaiseEventBatch");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonNetwork/RaiseEventBatch
struct CORDL_TYPE PhotonNetwork_RaiseEventBatch {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*() ;

/// @brief Method Equals, addr 0xa7298c0, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  other) ;

/// @brief Method GetHashCode, addr 0xa7298ac, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>* i___System__IEquatable_1___GlobalNamespace__PhotonNetwork_RaiseEventBatch_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetwork_RaiseEventBatch() ;

// Ctor Parameters [CppParam { name: "Group", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reliable", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PhotonNetwork_RaiseEventBatch(uint8_t  Group, bool  Reliable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field Group, offset: 0x0, size: 0x1, def value: None
 uint8_t  Group;

/// @brief Field Reliable, offset: 0x1, size: 0x1, def value: None
 bool  Reliable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonNetwork_RaiseEventBatch, Group) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetwork_RaiseEventBatch, Reliable) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonNetwork_RaiseEventBatch) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
