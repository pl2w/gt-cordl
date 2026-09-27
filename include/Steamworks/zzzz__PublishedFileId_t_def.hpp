#pragma once
// IWYU pragma private; include "Steamworks/PublishedFileId_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PublishedFileId_t)
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
struct PublishedFileId_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::PublishedFileId_t);
DEFINE_IL2CPP_CLASS(::Steamworks::PublishedFileId_t, "Steamworks", "PublishedFileId_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.PublishedFileId_t
struct CORDL_TYPE PublishedFileId_t {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::PublishedFileId_t  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::PublishedFileId_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::PublishedFileId_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::PublishedFileId_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::PublishedFileId_t>*() ;

/// @brief Method CompareTo, addr 0x5f33bcc, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::PublishedFileId_t  other) ;

/// @brief Method Equals, addr 0x5f33bbc, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::PublishedFileId_t  other) ;

/// @brief Method Equals, addr 0x5f33b00, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x5f33bb4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5f33af8, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f33af0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

static inline ::Steamworks::PublishedFileId_t getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::PublishedFileId_t>"
constexpr ::System::IComparable_1<::Steamworks::PublishedFileId_t>* i___System__IComparable_1___Steamworks__PublishedFileId_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::PublishedFileId_t>"
constexpr ::System::IEquatable_1<::Steamworks::PublishedFileId_t>* i___System__IEquatable_1___Steamworks__PublishedFileId_t_() ;

/// @brief Method op_Equality, addr 0x5f33ba8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::PublishedFileId_t  x, ::Steamworks::PublishedFileId_t  y) ;

static inline void setStaticF_Invalid(::Steamworks::PublishedFileId_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PublishedFileId_t() ;

// Ctor Parameters [CppParam { name: "m_PublishedFileId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr PublishedFileId_t(uint64_t  m_PublishedFileId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_PublishedFileId, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_PublishedFileId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::PublishedFileId_t, m_PublishedFileId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::PublishedFileId_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
