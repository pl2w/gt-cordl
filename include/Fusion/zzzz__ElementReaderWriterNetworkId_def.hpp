#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterNetworkId)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
struct NetworkId;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterNetworkId;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterNetworkId);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterNetworkId, "Fusion", "ElementReaderWriterNetworkId");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterNetworkId
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterNetworkId {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b7b0, size 0x5c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::NetworkId  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b7a8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b80c, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b784, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::NetworkId Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b790, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::NetworkId> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b79c, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkId  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* i___Fusion__IElementReaderWriter_1___Fusion__NetworkId_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterNetworkId() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterNetworkId) == 0x1, "Size mismatch!");

} // namespace end def Fusion
