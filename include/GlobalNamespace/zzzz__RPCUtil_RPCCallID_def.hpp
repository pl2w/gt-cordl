#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCUtil_RPCCallID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RPCUtil_RPCCallID)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct RPCUtil_RPCCallID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RPCUtil_RPCCallID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RPCUtil_RPCCallID, "", "RPCUtil/RPCCallID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RPCUtil/RPCCallID
struct CORDL_TYPE RPCUtil_RPCCallID {
public:
// Declarations
 __declspec(property(get=get_NameOfFunction)) ::StringW  NameOfFunction;

 __declspec(property(get=get_SenderID)) int32_t  SenderID;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>*() ;

/// @brief Method System.IEquatable<RPCUtil.RPCCallID>.Equals, addr 0x58f9ca8, size 0x5c, virtual true, abstract: false, final true
inline bool System_IEquatable_RPCUtil_RPCCallID__Equals(::GlobalNamespace::RPCUtil_RPCCallID  other) ;

/// @brief Method .ctor, addr 0x58f9b38, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  nameOfFunction, int32_t  senderId) ;

/// [IsReadOnly]
/// @brief Method get_NameOfFunction, addr 0x58f9ca0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NameOfFunction() ;

/// [IsReadOnly]
/// @brief Method get_SenderID, addr 0x58f9c98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SenderID() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>"
constexpr ::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>* i___System__IEquatable_1___GlobalNamespace__RPCUtil_RPCCallID_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RPCUtil_RPCCallID() ;

// Ctor Parameters [CppParam { name: "_senderID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nameOfFunction", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr RPCUtil_RPCCallID(int32_t  _senderID, ::StringW  _nameOfFunction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _senderID, offset: 0x0, size: 0x4, def value: None
 int32_t  _senderID;

/// @brief Field _nameOfFunction, offset: 0x8, size: 0x8, def value: None
 ::StringW  _nameOfFunction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RPCUtil_RPCCallID, _senderID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RPCUtil_RPCCallID, _nameOfFunction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RPCUtil_RPCCallID) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
