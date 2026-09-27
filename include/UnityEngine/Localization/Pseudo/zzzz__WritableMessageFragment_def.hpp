#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/WritableMessageFragment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__MessageFragment_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WritableMessageFragment)
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment;
}
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::WritableMessageFragment*);
MARK_REF_T(::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::WritableMessageFragment*, "UnityEngine.Localization.Pseudo", "WritableMessageFragment");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*, "UnityEngine.Localization.Pseudo", "WritableMessageFragment/<>c");
// [DebuggerDisplay("Writable: {Text}")]
// Dependencies UnityEngine.Localization.Pseudo.MessageFragment
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.WritableMessageFragment
class CORDL_TYPE WritableMessageFragment : public ::UnityEngine::Localization::Pseudo::MessageFragment {
public:
// Declarations
using __c = ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*  Pool;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

static inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* New_ctor() ;

/// @brief Method .ctor, addr 0xb022048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>* getStaticF_Pool() ;

/// @brief Method get_Text, addr 0xb02202c, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*  value) ;

/// @brief Method set_Text, addr 0xb022038, size 0x10, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WritableMessageFragment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WritableMessageFragment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WritableMessageFragment(WritableMessageFragment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WritableMessageFragment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WritableMessageFragment(WritableMessageFragment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::WritableMessageFragment) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.WritableMessageFragment/<>c
class CORDL_TYPE WritableMessageFragment___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*  __9;

static inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0xb0221fc, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* __cctor_b__5_0() ;

/// @brief Method .ctor, addr 0xb0221f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WritableMessageFragment___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WritableMessageFragment___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WritableMessageFragment___c(WritableMessageFragment___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WritableMessageFragment___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WritableMessageFragment___c(WritableMessageFragment___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::WritableMessageFragment___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
