#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RPCUtil)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct RPCUtil_RPCCallID;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RPCUtil;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RPCUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RPCUtil*, "", "RPCUtil");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RPCUtil
class CORDL_TYPE RPCUtil : public ::System::Object {
public:
// Declarations
using RPCCallID = ::GlobalNamespace::RPCUtil_RPCCallID;

/// @brief Field RPCCallLog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RPCCallLog, put=setStaticF_RPCCallLog)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*  RPCCallLog;

static inline ::GlobalNamespace::RPCUtil* New_ctor() ;

/// @brief Method NotSpam, addr 0x58f9964, size 0x1d4, virtual false, abstract: false, final false
static inline bool NotSpam(::StringW  id, ::GlobalNamespace::PhotonMessageInfoWrapped  info, float_t  delay) ;

/// @brief Method SafeValue, addr 0x58f9b44, size 0x24, virtual false, abstract: false, final false
static inline bool SafeValue(float_t  v) ;

/// @brief Method SafeValue, addr 0x58f9b68, size 0x90, virtual false, abstract: false, final false
static inline bool SafeValue(float_t  v, float_t  min, float_t  max) ;

/// @brief Method .ctor, addr 0x58f9bf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>* getStaticF_RPCCallLog() ;

static inline void setStaticF_RPCCallLog(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RPCUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RPCUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RPCUtil(RPCUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RPCUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RPCUtil(RPCUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RPCUtil) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
