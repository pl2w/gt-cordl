#pragma once
// IWYU pragma private; include "GorillaNetworking/CreditsView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CreditsSection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsView)
namespace GorillaNetworking {
class CreditsSection;
}
namespace GorillaNetworking {
class CreditsView___c;
}
namespace GorillaNetworking {
struct GorillaKeyboardBindings;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GorillaNetworking {
class CreditsView;
}
namespace GorillaNetworking {
class CreditsView___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CreditsView*);
MARK_REF_T(::GorillaNetworking::CreditsView___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CreditsView*, "GorillaNetworking", "CreditsView");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CreditsView___c*, "GorillaNetworking", "CreditsView/<>c");
// Dependencies GorillaNetworking.CreditsSection, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CreditsView
class CORDL_TYPE CreditsView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GorillaNetworking::CreditsView___c;

 __declspec(property(get=get_TotalPages)) int32_t  TotalPages;

/// @brief Field creditsSections, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_creditsSections, put=__cordl_internal_set_creditsSections)) ::ArrayW<::GorillaNetworking::CreditsSection*>  creditsSections;

/// @brief Field currentPage, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPage, put=__cordl_internal_set_currentPage)) int32_t  currentPage;

/// @brief Field pageSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageSize, put=__cordl_internal_set_pageSize)) int32_t  pageSize;

/// @brief Method GetPage, addr 0x5c73a7c, size 0x530, virtual false, abstract: false, final false
inline ::StringW GetPage(int32_t  page) ;

/// @brief Method GetPageEntries, addr 0x5c7391c, size 0x11c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::GorillaNetworking::CreditsSection*,int32_t> GetPageEntries(int32_t  page) ;

/// @brief Method GetScreenText, addr 0x5c73a74, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetScreenText() ;

static inline ::GorillaNetworking::CreditsView* New_ctor() ;

/// @brief Method PageOfSection, addr 0x5c73894, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* PageOfSection(::GorillaNetworking::CreditsSection*  section, int32_t  page) ;

/// @brief Method PagesPerSection, addr 0x5c737f4, size 0xa0, virtual false, abstract: false, final false
inline int32_t PagesPerSection(::GorillaNetworking::CreditsSection*  section) ;

/// @brief Method ProcessButtonPress, addr 0x5c73a38, size 0x3c, virtual false, abstract: false, final false
inline void ProcessButtonPress(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method Start, addr 0x5c72688, size 0x116c, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__9_0, addr 0x5c73fc0, size 0x88, virtual false, abstract: false, final false
inline void _Start_b__9_0(::StringW  result) ;

constexpr ::ArrayW<::GorillaNetworking::CreditsSection*> const& __cordl_internal_get_creditsSections() const;

constexpr ::ArrayW<::GorillaNetworking::CreditsSection*>& __cordl_internal_get_creditsSections() ;

constexpr int32_t const& __cordl_internal_get_currentPage() const;

constexpr int32_t& __cordl_internal_get_currentPage() ;

constexpr int32_t const& __cordl_internal_get_pageSize() const;

constexpr int32_t& __cordl_internal_get_pageSize() ;

constexpr void __cordl_internal_set_creditsSections(::ArrayW<::GorillaNetworking::CreditsSection*>  value) ;

constexpr void __cordl_internal_set_currentPage(int32_t  value) ;

constexpr void __cordl_internal_set_pageSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c73fac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method <get_TotalPages>b__7_0, addr 0x5c73fbc, size 0x4, virtual false, abstract: false, final false
inline int32_t _get_TotalPages_b__7_0(::GorillaNetworking::CreditsSection*  section) ;

/// @brief Method get_TotalPages, addr 0x5c725ec, size 0x9c, virtual false, abstract: false, final false
inline int32_t get_TotalPages() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsView(CreditsView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsView(CreditsView const& ) = delete;

/// @brief Field CREDITS_CONTINUED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_CONTINUED_KEY{u"CREDITS_CONTINUED"};

/// @brief Field CREDITS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_KEY{u"CREDITS"};

/// @brief Field CREDITS_PRESS_ENTER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_PRESS_ENTER_KEY{u"CREDITS_PRESS_ENTER"};

/// @brief Field PlayFabKey offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayFabKey{u"CreditsData"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4318};

/// @brief Field creditsSections, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::CreditsSection*>  ___creditsSections;

/// @brief Field pageSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___pageSize;

/// @brief Field currentPage, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___currentPage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CreditsView, ___creditsSections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CreditsView, ___pageSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CreditsView, ___currentPage) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CreditsView) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CreditsView/<>c
class CORDL_TYPE CreditsView___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::CreditsView___c*  __9;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__9_1;

static inline ::GorillaNetworking::CreditsView___c* New_ctor() ;

/// @brief Method <Start>b__9_1, addr 0x5c740b8, size 0x8c, virtual false, abstract: false, final false
inline void _Start_b__9_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5c740b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::CreditsView___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__9_1() ;

static inline void setStaticF___9(::GorillaNetworking::CreditsView___c*  value) ;

static inline void setStaticF___9__9_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsView___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsView___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsView___c(CreditsView___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsView___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsView___c(CreditsView___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::CreditsView___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
