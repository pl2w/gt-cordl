#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterPlayerRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterPlayerRef)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
struct PlayerRef;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterPlayerRef;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterPlayerRef);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterPlayerRef, "Fusion", "ElementReaderWriterPlayerRef");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterPlayerRef
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterPlayerRef {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b6ac, size 0x54, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::PlayerRef  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b6a4, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b700, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b680, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::PlayerRef Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b68c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::PlayerRef> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b698, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::PlayerRef  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>* i___Fusion__IElementReaderWriter_1___Fusion__PlayerRef_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::PlayerRef>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterPlayerRef() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterPlayerRef) == 0x1, "Size mismatch!");

} // namespace end def Fusion
