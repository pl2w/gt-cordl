#pragma once
// IWYU pragma private; include "Fusion/NetworkBufferSerializerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBufferSerializerInfo)
namespace Fusion {
class NetworkBufferSerializer;
}
// Forward declare root types
namespace Fusion {
struct NetworkBufferSerializerInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkBufferSerializerInfo);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBufferSerializerInfo, "Fusion", "NetworkBufferSerializerInfo");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkBufferSerializerInfo
struct CORDL_TYPE NetworkBufferSerializerInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBufferSerializerInfo() ;

// Ctor Parameters [CppParam { name: "Tag", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Serializer", ty: "::Fusion::NetworkBufferSerializer*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBufferSerializerInfo(int32_t  Tag, int32_t  Offset, ::Fusion::NetworkBufferSerializer*  Serializer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Tag, offset: 0x0, size: 0x4, def value: None
 int32_t  Tag;

/// @brief Field Offset, offset: 0x4, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Serializer, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkBufferSerializer*  Serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBufferSerializerInfo, Tag) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBufferSerializerInfo, Offset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBufferSerializerInfo, Serializer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBufferSerializerInfo) == 0x10, "Size mismatch!");

} // namespace end def Fusion
