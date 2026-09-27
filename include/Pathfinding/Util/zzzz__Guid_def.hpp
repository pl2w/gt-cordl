#pragma once
// IWYU pragma private; include "Pathfinding/Util/Guid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Pathfinding::Util {
struct Guid;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Util::Guid);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::Guid, "Pathfinding.Util", "Guid");
// Dependencies 
namespace Pathfinding::Util {
// Is value type: true
// CS Name: Pathfinding.Util.Guid
struct CORDL_TYPE Guid {
public:
// Declarations
/// @brief Field random, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_random, put=setStaticF_random)) ::System::Random*  random;

/// @brief Field text, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_text, put=setStaticF_text)) ::System::Text::StringBuilder*  text;

/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Pathfinding::Util::Guid  zero;

/// @brief Field zeroString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zeroString, put=setStaticF_zeroString)) ::StringW  zeroString;

/// @brief Method Equals, addr 0x5edfc64, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  _rhs) ;

/// @brief Method GetHashCode, addr 0x5edfcec, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method NewGuid, addr 0x5edfb90, size 0xb4, virtual false, abstract: false, final false
static inline ::Pathfinding::Util::Guid NewGuid() ;

/// @brief Method Parse, addr 0x5edfa70, size 0x28, virtual false, abstract: false, final false
static inline ::Pathfinding::Util::Guid Parse(::StringW  input) ;

/// @brief Method SwapEndianness, addr 0x5edf760, size 0x8, virtual false, abstract: false, final false
static inline uint64_t SwapEndianness(uint64_t  value) ;

/// @brief Method ToByteArray, addr 0x5edfa98, size 0xf8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToString, addr 0x5edfd00, size 0x274, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5edf61c, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  bytes) ;

/// @brief Method .ctor, addr 0x5edf768, size 0x308, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

static inline ::System::Random* getStaticF_random() ;

static inline ::System::Text::StringBuilder* getStaticF_text() ;

static inline ::Pathfinding::Util::Guid getStaticF_zero() ;

static inline ::StringW getStaticF_zeroString() ;

/// @brief Method op_Equality, addr 0x5edfc44, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::Util::Guid  lhs, ::Pathfinding::Util::Guid  rhs) ;

/// @brief Method op_Inequality, addr 0x5edfc54, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Pathfinding::Util::Guid  lhs, ::Pathfinding::Util::Guid  rhs) ;

static inline void setStaticF_random(::System::Random*  value) ;

static inline void setStaticF_text(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_zero(::Pathfinding::Util::Guid  value) ;

static inline void setStaticF_zeroString(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Guid() ;

// Ctor Parameters [CppParam { name: "_a", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Guid(uint64_t  _a, uint64_t  _b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hex offset 0xffffffff size 0x8
static constexpr ::ConstString  hex{u"0123456789ABCDEF"};

/// @brief Field _a, offset: 0x0, size: 0x8, def value: None
 uint64_t  _a;

/// @brief Field _b, offset: 0x8, size: 0x8, def value: None
 uint64_t  _b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::Guid, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::Guid, _b) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::Guid) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Util
