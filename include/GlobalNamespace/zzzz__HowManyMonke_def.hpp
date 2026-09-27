#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonke.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HowManyMonke_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HowManyMonke)
namespace GlobalNamespace {
class HowManyMonke_CCUResponse;
}
namespace GlobalNamespace {
struct HowManyMonke_State;
}
namespace GlobalNamespace {
struct HowManyMonke__FetchRecheckDelay_d__12;
}
namespace GlobalNamespace {
struct HowManyMonke__FetchThisMany_d__15;
}
namespace GlobalNamespace {
struct HowManyMonke__Start_d__11;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HowManyMonke;
}
namespace GlobalNamespace {
class HowManyMonke_CCUResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HowManyMonke*);
MARK_REF_T(::GlobalNamespace::HowManyMonke_CCUResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HowManyMonke*, "", "HowManyMonke");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HowManyMonke_CCUResponse*, "", "HowManyMonke/CCUResponse");
// Dependencies HowManyMonke::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HowManyMonke
class CORDL_TYPE HowManyMonke : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CCUResponse = ::GlobalNamespace::HowManyMonke_CCUResponse;

using State = ::GlobalNamespace::HowManyMonke_State;

using _FetchRecheckDelay_d__12 = ::GlobalNamespace::HowManyMonke__FetchRecheckDelay_d__12;

using _FetchThisMany_d__15 = ::GlobalNamespace::HowManyMonke__FetchThisMany_d__15;

using _Start_d__11 = ::GlobalNamespace::HowManyMonke__Start_d__11;

/// @brief Field CCUEndpoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CCUEndpoint, put=__cordl_internal_set_CCUEndpoint)) ::StringW  CCUEndpoint;

/// @brief Field OnCheck, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCheck, put=setStaticF_OnCheck)) ::System::Action_1<int32_t>*  OnCheck;

/// @brief Field ThisMany, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ThisMany, put=setStaticF_ThisMany)) int32_t  ThisMany;

/// @brief Field recheckDelay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_recheckDelay, put=setStaticF_recheckDelay)) int32_t  recheckDelay;

/// @brief Field state, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::HowManyMonke_State  state;

/// @brief Field titleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// [AsyncStateMachine(typeof(HowManyMonke::<FetchRecheckDelay>d__12))]
/// @brief Method FetchRecheckDelay, addr 0x56bfd3c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FetchRecheckDelay() ;

/// [AsyncStateMachine(typeof(HowManyMonke::<FetchThisMany>d__15))]
/// @brief Method FetchThisMany, addr 0x56bff34, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* FetchThisMany() ;

static inline ::GlobalNamespace::HowManyMonke* New_ctor() ;

/// [AsyncStateMachine(typeof(HowManyMonke::<Start>d__11))]
/// @brief Method Start, addr 0x56bfc98, size 0xa4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get_CCUEndpoint() const;

constexpr ::StringW& __cordl_internal_get_CCUEndpoint() ;

constexpr ::GlobalNamespace::HowManyMonke_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::HowManyMonke_State& __cordl_internal_get_state() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr void __cordl_internal_set_CCUEndpoint(::StringW  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::HowManyMonke_State  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x56c0040, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<int32_t>* getStaticF_OnCheck() ;

static inline int32_t getStaticF_ThisMany() ;

static inline int32_t getStaticF_recheckDelay() ;

/// @brief Method get_RecheckDelay, addr 0x56bfc28, size 0x70, virtual false, abstract: false, final false
static inline float_t get_RecheckDelay() ;

/// @brief Method onTD, addr 0x56bfe74, size 0xc0, virtual false, abstract: false, final false
inline void onTD(::StringW  obj) ;

/// @brief Method onTDError, addr 0x56bfe14, size 0x60, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

static inline void setStaticF_OnCheck(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_ThisMany(int32_t  value) ;

static inline void setStaticF_recheckDelay(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HowManyMonke() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonke", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HowManyMonke(HowManyMonke && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonke", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HowManyMonke(HowManyMonke const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1000};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/HowManyMonke]  "};

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// @brief Field state, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::HowManyMonke_State  ___state;

/// [SerializeField]
/// @brief Field CCUEndpoint, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___CCUEndpoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowManyMonke, ___titleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonke, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonke, ___CCUEndpoint) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HowManyMonke) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HowManyMonke/CCUResponse
class CORDL_TYPE HowManyMonke_CCUResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CCUTotal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_CCUTotal, put=__cordl_internal_set_CCUTotal)) int32_t  CCUTotal;

/// @brief Field ErrorMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorMessage, put=__cordl_internal_set_ErrorMessage)) ::StringW  ErrorMessage;

static inline ::GlobalNamespace::HowManyMonke_CCUResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CCUTotal() const;

constexpr int32_t& __cordl_internal_get_CCUTotal() ;

constexpr ::StringW const& __cordl_internal_get_ErrorMessage() const;

constexpr ::StringW& __cordl_internal_get_ErrorMessage() ;

constexpr void __cordl_internal_set_CCUTotal(int32_t  value) ;

constexpr void __cordl_internal_set_ErrorMessage(::StringW  value) ;

/// @brief Method .ctor, addr 0x56c0094, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HowManyMonke_CCUResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonke_CCUResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HowManyMonke_CCUResponse(HowManyMonke_CCUResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonke_CCUResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HowManyMonke_CCUResponse(HowManyMonke_CCUResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{996};

/// @brief Field CCUTotal, offset: 0x10, size: 0x4, def value: None
 int32_t  ___CCUTotal;

/// @brief Field ErrorMessage, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ErrorMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowManyMonke_CCUResponse, ___CCUTotal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonke_CCUResponse, ___ErrorMessage) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HowManyMonke_CCUResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
