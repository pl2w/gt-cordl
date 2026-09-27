#pragma once
// IWYU pragma private; include "Steamworks/HSteamPipe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HSteamPipe)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct HSteamPipe;
}
// Write type traits
MARK_VAL_T(::Steamworks::HSteamPipe);
DEFINE_IL2CPP_CLASS(::Steamworks::HSteamPipe, "Steamworks", "HSteamPipe");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HSteamPipe
struct CORDL_TYPE HSteamPipe {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamPipe>"
constexpr operator  ::System::IComparable_1<::Steamworks::HSteamPipe>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamPipe>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HSteamPipe>*() ;

/// @brief Method CompareTo, addr 0x5f34048, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::HSteamPipe  other) ;

/// @brief Method Equals, addr 0x5f34038, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HSteamPipe  other) ;

/// @brief Method Equals, addr 0x5f33fb8, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x5f34030, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5f33fb0, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f33fa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamPipe>"
constexpr ::System::IComparable_1<::Steamworks::HSteamPipe>* i___System__IComparable_1___Steamworks__HSteamPipe_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamPipe>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamPipe>* i___System__IEquatable_1___Steamworks__HSteamPipe_() ;

/// @brief Method op_Equality, addr 0x5f33470, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HSteamPipe  x, ::Steamworks::HSteamPipe  y) ;

/// @brief Method op_Explicit, addr 0x5f31e38, size 0x4, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe op_Explicit___Steamworks__HSteamPipe(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HSteamPipe() ;

// Ctor Parameters [CppParam { name: "m_HSteamPipe", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HSteamPipe(int32_t  m_HSteamPipe) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_HSteamPipe, offset: 0x0, size: 0x4, def value: None
 int32_t  m_HSteamPipe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HSteamPipe, m_HSteamPipe) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HSteamPipe) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
