#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer_BatchKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectMeshRenderer_BatchKey)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct IndirectMeshRenderer_BatchKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IndirectMeshRenderer_BatchKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshRenderer_BatchKey, "", "IndirectMeshRenderer/BatchKey");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: IndirectMeshRenderer/BatchKey
struct CORDL_TYPE IndirectMeshRenderer_BatchKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>*() ;

/// @brief Method Equals, addr 0x56970e8, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5697094, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::IndirectMeshRenderer_BatchKey  other) ;

/// @brief Method GetHashCode, addr 0x56970c8, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>* i___System__IEquatable_1___GlobalNamespace__IndirectMeshRenderer_BatchKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshRenderer_BatchKey() ;

// Ctor Parameters [CppParam { name: "meshId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shaderId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IndirectMeshRenderer_BatchKey(int32_t  meshId, int32_t  textureId, int32_t  shaderId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field meshId, offset: 0x0, size: 0x4, def value: None
 int32_t  meshId;

/// @brief Field textureId, offset: 0x4, size: 0x4, def value: None
 int32_t  textureId;

/// @brief Field shaderId, offset: 0x8, size: 0x4, def value: None
 int32_t  shaderId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_BatchKey, meshId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_BatchKey, textureId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_BatchKey, shaderId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndirectMeshRenderer_BatchKey) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
