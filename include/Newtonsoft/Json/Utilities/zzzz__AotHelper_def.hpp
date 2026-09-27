#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/AotHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AotHelper)
namespace Newtonsoft::Json::Utilities {
template<typename T>
class AotHelper___c__2_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class AotHelper;
}
namespace Newtonsoft::Json::Utilities {
template<typename T>
class AotHelper___c__2_1;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::AotHelper*);
MARK_GEN_REF_T_PTR(::Newtonsoft::Json::Utilities::AotHelper___c__2_1);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::AotHelper*, "Newtonsoft.Json.Utilities", "AotHelper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Newtonsoft::Json::Utilities::AotHelper___c__2_1, "Newtonsoft.Json.Utilities", "AotHelper/<>c__2`1");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.AotHelper
class CORDL_TYPE AotHelper : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__2_1 = ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>;

/// @brief Field s_alwaysFalse, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_alwaysFalse, put=setStaticF_s_alwaysFalse)) bool  s_alwaysFalse;

/// [NullableContext(1)]
/// @brief Method Ensure, addr 0xa390284, size 0x164, virtual false, abstract: false, final false
static inline void Ensure(::System::Action*  action) ;

/// @brief Method EnsureList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureList() ;

/// @brief Method IsFalse, addr 0xa3903e8, size 0x58, virtual false, abstract: false, final false
static inline bool IsFalse() ;

static inline bool getStaticF_s_alwaysFalse() ;

static inline void setStaticF_s_alwaysFalse(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AotHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AotHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AotHelper(AotHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AotHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AotHelper(AotHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::AotHelper) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.AotHelper/<>c__2`1<T>
class CORDL_TYPE AotHelper___c__2_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action*  __9__2_0;

static inline ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>* New_ctor() ;

/// @brief Method <EnsureList>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _EnsureList_b__2_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Newtonsoft::Json::Utilities::AotHelper___c__2_1<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AotHelper___c__2_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AotHelper___c__2_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AotHelper___c__2_1(AotHelper___c__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AotHelper___c__2_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AotHelper___c__2_1(AotHelper___c__2_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
