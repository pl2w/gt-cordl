#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterNetworkBool)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
struct NetworkBool;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterNetworkBool;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterNetworkBool);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterNetworkBool, "Fusion", "ElementReaderWriterNetworkBool");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterNetworkBool
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterNetworkBool {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b5e0, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::NetworkBool  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b5d8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b5fc, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b5b4, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::NetworkBool Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b5c0, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::NetworkBool> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b5cc, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBool  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* i___Fusion__IElementReaderWriter_1___Fusion__NetworkBool_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterNetworkBool() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterNetworkBool) == 0x1, "Size mismatch!");

} // namespace end def Fusion
