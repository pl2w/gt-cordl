#pragma once
// IWYU pragma private; include "GlobalNamespace/ElementReaderWriterBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterBoolean)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ElementReaderWriterBoolean;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ElementReaderWriterBoolean);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ElementReaderWriterBoolean, "", "ElementReaderWriterBoolean");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ElementReaderWriterBoolean
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterBoolean {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<bool>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<bool>"
constexpr operator  ::Fusion::IElementReaderWriter_1<bool>*() ;

/// @brief Method GetElementHashCode, addr 0x5f6ba60, size 0x34, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(bool  val) ;

/// @brief Method GetElementWordCount, addr 0x5f6ba58, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f6ba94, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<bool>* GetInstance() ;

/// @brief Method Read, addr 0x5f6b9e8, size 0x14, virtual true, abstract: false, final true
inline bool Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f6b9fc, size 0x4c, virtual true, abstract: false, final true
inline ::by_ref<bool> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f6ba48, size 0x10, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, bool  val) ;

static inline ::Fusion::IElementReaderWriter_1<bool>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<bool>"
constexpr ::Fusion::IElementReaderWriter_1<bool>* i___Fusion__IElementReaderWriter_1_bool_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<bool>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterBoolean() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ElementReaderWriterBoolean) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
