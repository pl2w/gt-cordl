#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/TestTone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TestTone)
namespace Photon::Voice::Unity::UtilityScripts {
class TestTone___c;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class TestTone;
}
namespace Photon::Voice::Unity::UtilityScripts {
class TestTone___c;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::TestTone*);
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::TestTone___c*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::TestTone*, "Photon.Voice.Unity.UtilityScripts", "TestTone");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::TestTone___c*, "Photon.Voice.Unity.UtilityScripts", "TestTone/<>c");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.TestTone
class CORDL_TYPE TestTone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Photon::Voice::Unity::UtilityScripts::TestTone___c;

static inline ::Photon::Voice::Unity::UtilityScripts::TestTone* New_ctor() ;

/// @brief Method Start, addr 0xa78d3f8, size 0x128, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0xa78d520, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestTone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestTone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestTone(TestTone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestTone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestTone(TestTone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::TestTone) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.TestTone/<>c
class CORDL_TYPE TestTone___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Voice::Unity::UtilityScripts::TestTone___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_1<::Photon::Voice::IAudioDesc*>*  __9__0_0;

static inline ::Photon::Voice::Unity::UtilityScripts::TestTone___c* New_ctor() ;

/// @brief Method <Start>b__0_0, addr 0xa78d598, size 0x68, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioDesc* _Start_b__0_0() ;

/// @brief Method .ctor, addr 0xa78d590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Voice::Unity::UtilityScripts::TestTone___c* getStaticF___9() ;

static inline ::System::Func_1<::Photon::Voice::IAudioDesc*>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Photon::Voice::Unity::UtilityScripts::TestTone___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestTone___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestTone___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestTone___c(TestTone___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestTone___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestTone___c(TestTone___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28907};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::TestTone___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
