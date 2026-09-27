#pragma once
// IWYU pragma private; include "Fusion/NetworkTransformSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBufferSerializer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTransformSerializer)
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
class NetworkTransformSerializer;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkTransformSerializer*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkTransformSerializer*, "Fusion", "NetworkTransformSerializer");
// Dependencies Fusion.NetworkBufferSerializer
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkTransformSerializer
class CORDL_TYPE NetworkTransformSerializer : public ::Fusion::NetworkBufferSerializer {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::NetworkTransformSerializer*  Instance;

static inline ::Fusion::NetworkTransformSerializer* New_ctor() ;

/// @brief Method Read, addr 0x5fcde14, size 0x460, virtual true, abstract: false, final false
inline int32_t Read(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word) ;

/// @brief Method Skip, addr 0x5fcdd70, size 0xa4, virtual true, abstract: false, final false
inline int32_t Skip(::Fusion::Simulation_RecvContext*  rc, int32_t  word) ;

/// @brief Method Write, addr 0x5fcd8e0, size 0x490, virtual true, abstract: false, final false
inline int32_t Write(::Fusion::Simulation_SendContext*  sc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word, int32_t  prev) ;

/// @brief Method .ctor, addr 0x5fce274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkTransformSerializer* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Fusion::NetworkTransformSerializer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransformSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransformSerializer(NetworkTransformSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransformSerializer(NetworkTransformSerializer const& ) = delete;

/// @brief Field JUMP_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  JUMP_OFFSET{static_cast<int32_t>(0x6)};

/// @brief Field POSITION_ACCURACY offset 0xffffffff size 0x4
static constexpr int32_t  POSITION_ACCURACY{static_cast<int32_t>(0x400)};

/// @brief Field POSITION_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  POSITION_BLOCK_SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkTransformSerializer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
