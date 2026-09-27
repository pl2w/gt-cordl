#pragma once
// IWYU pragma private; include "Fusion/NetworkBufferSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBufferSerializer)
namespace Fusion {
struct NetworkBufferSerializerInfo;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
class Simulation_RecvContext;
}
namespace Fusion {
class Simulation_SendContext;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
class NetworkBufferSerializer;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkBufferSerializer*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBufferSerializer*, "Fusion", "NetworkBufferSerializer");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBufferSerializer
class CORDL_TYPE NetworkBufferSerializer : public ::System::Object {
public:
// Declarations
static inline ::Fusion::NetworkBufferSerializer* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Read(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word) ;

/// @brief Method Skip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Skip(::Fusion::Simulation_RecvContext*  rc, int32_t  word) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Write(::Fusion::Simulation_SendContext*  sc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word, int32_t  prev) ;

/// @brief Method .ctor, addr 0x5fa7b70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBufferSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBufferSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBufferSerializer(NetworkBufferSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBufferSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBufferSerializer(NetworkBufferSerializer const& ) = delete;

/// @brief Field DATA_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  DATA_BLOCK_SIZE{static_cast<int32_t>(0x6)};

/// @brief Field OFFSET_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  OFFSET_BLOCK_SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19113};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkBufferSerializer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
