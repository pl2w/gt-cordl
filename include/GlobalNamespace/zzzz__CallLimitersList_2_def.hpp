#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimitersList_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CallLimitersList_2)
// Forward declare root types
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CallLimitersList_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CallLimitersList_2, "", "CallLimitersList`2");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename Titem,typename Tenum>
// Is value type: false
// CS Name: CallLimitersList`2<Titem,Tenum>
class CORDL_TYPE CallLimitersList_2 : public ::System::Object {
public:
// Declarations
/// @brief Field m_callLimiters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_callLimiters, put=__cordl_internal_set_m_callLimiters)) ::ArrayW<Titem>  m_callLimiters;

/// @brief Method GetCopy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* GetCopy() ;

/// @brief Method IsSpamming, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSpamming(Tenum  index) ;

/// @brief Method IsSpamming, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSpamming(Tenum  index, double_t  serverTime) ;

/// @brief Method IsSpamming, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSpamming(int32_t  index) ;

/// @brief Method IsSpamming, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSpamming(int32_t  index, double_t  serverTime) ;

static inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* New_ctor() ;

static inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* New_ctor(::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*  source) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<Titem> const& __cordl_internal_get_m_callLimiters() const;

constexpr ::ArrayW<Titem>& __cordl_internal_get_m_callLimiters() ;

constexpr void __cordl_internal_set_m_callLimiters(::ArrayW<Titem>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallLimitersList_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallLimitersList_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallLimitersList_2(CallLimitersList_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallLimitersList_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallLimitersList_2(CallLimitersList_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3361};

/// [RequiredListLength("GetMaxLength")]
/// [SerializeField]
/// @brief Field m_callLimiters, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<Titem>  ___m_callLimiters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
