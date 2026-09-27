#pragma once
// IWYU pragma private; include "Fusion/NetworkArrayReadOnly_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkArrayReadOnly_1)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
template<typename T>
struct NetworkArrayReadOnly_1;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::NetworkArrayReadOnly_1);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkArrayReadOnly_1, "Fusion", "NetworkArrayReadOnly`1");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkArrayReadOnly`1<T>
struct CORDL_TYPE NetworkArrayReadOnly_1 {
public:
// Declarations
 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  array, int32_t  length, ::Fusion::IElementReaderWriter_1<T>*  readerWriter) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkArrayReadOnly_1() ;

// Ctor Parameters [CppParam { name: "_array", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readerWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkArrayReadOnly_1(uint8_t*  _array, int32_t  _length, ::Fusion::IElementReaderWriter_1<T>*  _readerWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array, offset: 0x0, size: 0x8, def value: None
 uint8_t*  _array;

/// @brief Field _length, offset: 0x8, size: 0x4, def value: None
 int32_t  _length;

/// @brief Field _readerWriter, offset: 0x10, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<T>*  _readerWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
