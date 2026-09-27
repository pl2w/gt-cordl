#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkBehaviourId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterNetworkBehaviourId)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
struct NetworkBehaviourId;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterNetworkBehaviourId;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterNetworkBehaviourId);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterNetworkBehaviourId, "Fusion", "ElementReaderWriterNetworkBehaviourId");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterNetworkBehaviourId
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterNetworkBehaviourId {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b8bc, size 0x18, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::NetworkBehaviourId  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b8b4, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b8d4, size 0xb94, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b890, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::NetworkBehaviourId Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b89c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::NetworkBehaviourId> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b8a8, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBehaviourId  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* i___Fusion__IElementReaderWriter_1___Fusion__NetworkBehaviourId_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterNetworkBehaviourId() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19012};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterNetworkBehaviourId) == 0x1, "Size mismatch!");

} // namespace end def Fusion
