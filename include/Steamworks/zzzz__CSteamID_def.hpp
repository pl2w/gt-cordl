#pragma once
// IWYU pragma private; include "Steamworks/CSteamID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CSteamID)
namespace Steamworks {
struct AccountID_t;
}
namespace Steamworks {
struct EAccountType;
}
namespace Steamworks {
struct EUniverse;
}
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
struct CSteamID;
}
// Write type traits
MARK_VAL_T(::Steamworks::CSteamID);
DEFINE_IL2CPP_CLASS(::Steamworks::CSteamID, "Steamworks", "CSteamID");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CSteamID
#pragma pack(push, 4)
struct CORDL_TYPE CSteamID {
public:
// Declarations
/// @brief Field LanModeGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LanModeGS, put=setStaticF_LanModeGS)) ::Steamworks::CSteamID  LanModeGS;

/// @brief Field Nil, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Nil, put=setStaticF_Nil)) ::Steamworks::CSteamID  Nil;

/// @brief Field NonSteamGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NonSteamGS, put=setStaticF_NonSteamGS)) ::Steamworks::CSteamID  NonSteamGS;

/// @brief Field NotInitYetGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NotInitYetGS, put=setStaticF_NotInitYetGS)) ::Steamworks::CSteamID  NotInitYetGS;

/// @brief Field OutofDateGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OutofDateGS, put=setStaticF_OutofDateGS)) ::Steamworks::CSteamID  OutofDateGS;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr operator  ::System::IComparable_1<::Steamworks::CSteamID>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr operator  ::System::IEquatable_1<::Steamworks::CSteamID>*() ;

/// @brief Method CompareTo, addr 0x5f33854, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::CSteamID  other) ;

/// @brief Method Equals, addr 0x5f33844, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::CSteamID  other) ;

/// @brief Method Equals, addr 0x5f33788, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x5f3383c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InstancedSet, addr 0x5f33648, size 0x98, virtual false, abstract: false, final false
inline void InstancedSet(::Steamworks::AccountID_t  unAccountID, uint32_t  unInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method SetAccountID, addr 0x5f336e8, size 0x68, virtual false, abstract: false, final false
inline void SetAccountID(::Steamworks::AccountID_t  other) ;

/// @brief Method SetAccountInstance, addr 0x5f3376c, size 0x14, virtual false, abstract: false, final false
inline void SetAccountInstance(uint32_t  other) ;

/// @brief Method SetEAccountType, addr 0x5f33758, size 0x14, virtual false, abstract: false, final false
inline void SetEAccountType(::Steamworks::EAccountType  other) ;

/// @brief Method SetEUniverse, addr 0x5f33750, size 0x8, virtual false, abstract: false, final false
inline void SetEUniverse(::Steamworks::EUniverse  other) ;

/// @brief Method ToString, addr 0x5f33780, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f336e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  ulSteamID) ;

/// @brief Method .ctor, addr 0x5f335c0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::AccountID_t  unAccountID, uint32_t  unAccountInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

static inline ::Steamworks::CSteamID getStaticF_LanModeGS() ;

static inline ::Steamworks::CSteamID getStaticF_Nil() ;

static inline ::Steamworks::CSteamID getStaticF_NonSteamGS() ;

static inline ::Steamworks::CSteamID getStaticF_NotInitYetGS() ;

static inline ::Steamworks::CSteamID getStaticF_OutofDateGS() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr ::System::IComparable_1<::Steamworks::CSteamID>* i___System__IComparable_1___Steamworks__CSteamID_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr ::System::IEquatable_1<::Steamworks::CSteamID>* i___System__IEquatable_1___Steamworks__CSteamID_() ;

/// @brief Method op_Equality, addr 0x5f33830, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y) ;

/// @brief Method op_Explicit, addr 0x5f2f480, size 0x4, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID op_Explicit___Steamworks__CSteamID(uint64_t  value) ;

static inline void setStaticF_LanModeGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_Nil(::Steamworks::CSteamID  value) ;

static inline void setStaticF_NonSteamGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_NotInitYetGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_OutofDateGS(::Steamworks::CSteamID  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CSteamID() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr CSteamID(uint64_t  m_SteamID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_SteamID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::CSteamID, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CSteamID) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
