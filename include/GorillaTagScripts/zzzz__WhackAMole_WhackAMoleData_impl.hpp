#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_WhackAMoleData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@129_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@71_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_WhackAMoleData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___128_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WhackAMole_GameState (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(::GlobalNamespace::WhackAMole_GameState)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_CurrentLevelIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentLevelIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentLevelIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_CurrentLevelIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentLevelIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentLevelIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_CurrentScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_CurrentScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_TotalScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_TotalScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_TotalScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_TotalScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_TotalScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_TotalScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_BestScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_BestScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_BestScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_BestScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_BestScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_BestScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_RightPlayerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_RightPlayerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_RightPlayerScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_RightPlayerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_RightPlayerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_RightPlayerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_HighScorePlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_128> (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_HighScorePlayerName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b7fe14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_HighScorePlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_HighScorePlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(::Fusion::NetworkString_1<::Fusion::_128>)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_HighScorePlayerName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b80760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_HighScorePlayerName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_RemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_RemainingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_RemainingTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_RemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(float_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_RemainingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_RemainingTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_GameEndedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_GameEndedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_GameEndedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_GameEndedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(float_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_GameEndedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_GameEndedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_GameId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_GameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_GameId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_GameId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_GameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_GameId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_PickedMolesIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_PickedMolesIndexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_PickedMolesIndexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.set_PickedMolesIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(int32_t)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::set_PickedMolesIndexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b807e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_PickedMolesIndexCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData.get_PickedMolesIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkDictionary_2<int32_t,int32_t> (::GlobalNamespace::WhackAMole_WhackAMoleData::*)()>(&::GlobalNamespace::WhackAMole_WhackAMoleData::get_PickedMolesIndex)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b80150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_PickedMolesIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhackAMole_WhackAMoleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhackAMole_WhackAMoleData::*)(::GlobalNamespace::WhackAMole_GameState, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW, float_t, float_t, int32_t, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*)>(&::GlobalNamespace::WhackAMole_WhackAMoleData::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b7f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::WhackAMole_GameState& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentState_k__BackingField()  {
return this->____CurrentState_k__BackingField;
}
constexpr ::GlobalNamespace::WhackAMole_GameState const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentState_k__BackingField() const {
return this->____CurrentState_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::WhackAMole_GameState  value)  {
this->____CurrentState_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentLevelIndex_k__BackingField()  {
return this->____CurrentLevelIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentLevelIndex_k__BackingField() const {
return this->____CurrentLevelIndex_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__CurrentLevelIndex_k__BackingField(int32_t  value)  {
this->____CurrentLevelIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentScore_k__BackingField()  {
return this->____CurrentScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__CurrentScore_k__BackingField() const {
return this->____CurrentScore_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__CurrentScore_k__BackingField(int32_t  value)  {
this->____CurrentScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__TotalScore_k__BackingField()  {
return this->____TotalScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__TotalScore_k__BackingField() const {
return this->____TotalScore_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__TotalScore_k__BackingField(int32_t  value)  {
this->____TotalScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__BestScore_k__BackingField()  {
return this->____BestScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__BestScore_k__BackingField() const {
return this->____BestScore_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__BestScore_k__BackingField(int32_t  value)  {
this->____BestScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__RightPlayerScore_k__BackingField()  {
return this->____RightPlayerScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__RightPlayerScore_k__BackingField() const {
return this->____RightPlayerScore_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__RightPlayerScore_k__BackingField(int32_t  value)  {
this->____RightPlayerScore_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@129& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__HighScorePlayerName()  {
return this->____HighScorePlayerName;
}
constexpr ::Fusion::CodeGen::FixedStorage@129 const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__HighScorePlayerName() const {
return this->____HighScorePlayerName;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__HighScorePlayerName(::Fusion::CodeGen::FixedStorage@129  value)  {
this->____HighScorePlayerName = value;
}
constexpr float_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__RemainingTime_k__BackingField()  {
return this->____RemainingTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__RemainingTime_k__BackingField() const {
return this->____RemainingTime_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__RemainingTime_k__BackingField(float_t  value)  {
this->____RemainingTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__GameEndedTime_k__BackingField()  {
return this->____GameEndedTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__GameEndedTime_k__BackingField() const {
return this->____GameEndedTime_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__GameEndedTime_k__BackingField(float_t  value)  {
this->____GameEndedTime_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__GameId_k__BackingField()  {
return this->____GameId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__GameId_k__BackingField() const {
return this->____GameId_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__GameId_k__BackingField(int32_t  value)  {
this->____GameId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__PickedMolesIndexCount_k__BackingField()  {
return this->____PickedMolesIndexCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__PickedMolesIndexCount_k__BackingField() const {
return this->____PickedMolesIndexCount_k__BackingField;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__PickedMolesIndexCount_k__BackingField(int32_t  value)  {
this->____PickedMolesIndexCount_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@71& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__PickedMolesIndex()  {
return this->____PickedMolesIndex;
}
constexpr ::Fusion::CodeGen::FixedStorage@71 const& GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_get__PickedMolesIndex() const {
return this->____PickedMolesIndex;
}
constexpr void GlobalNamespace::WhackAMole_WhackAMoleData::__cordl_internal_set__PickedMolesIndex(::Fusion::CodeGen::FixedStorage@71  value)  {
this->____PickedMolesIndex = value;
}
inline ::GlobalNamespace::WhackAMole_GameState GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WhackAMole_GameState>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentState(::GlobalNamespace::WhackAMole_GameState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentLevelIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentLevelIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentLevelIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentLevelIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_CurrentScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_CurrentScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_CurrentScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_CurrentScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_TotalScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_TotalScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_TotalScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_TotalScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_BestScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_BestScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_BestScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_BestScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_RightPlayerScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_RightPlayerScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_RightPlayerScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_RightPlayerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkString_1<::Fusion::_128> GlobalNamespace::WhackAMole_WhackAMoleData::get_HighScorePlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_HighScorePlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_128>>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_HighScorePlayerName(::Fusion::NetworkString_1<::Fusion::_128>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_HighScorePlayerName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::WhackAMole_WhackAMoleData::get_RemainingTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_RemainingTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_RemainingTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_RemainingTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::WhackAMole_WhackAMoleData::get_GameEndedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_GameEndedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_GameEndedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_GameEndedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_GameId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_GameId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_GameId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_GameId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WhackAMole_WhackAMoleData::get_PickedMolesIndexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_PickedMolesIndexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::set_PickedMolesIndexCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"set_PickedMolesIndexCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkDictionary_2<int32_t,int32_t> GlobalNamespace::WhackAMole_WhackAMoleData::get_PickedMolesIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {"get_PickedMolesIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionary_2<int32_t,int32_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::WhackAMole_WhackAMoleData::_ctor(::GlobalNamespace::WhackAMole_GameState  state, int32_t  currentLevelIndex, int32_t  cScore, int32_t  tScore, int32_t  bScore, int32_t  rPScore, ::StringW  hScorePName, float_t  remainingTime, float_t  endedTime, int32_t  gameId, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  moleIndexs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WhackAMole_WhackAMoleData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, currentLevelIndex, cScore, tScore, bScore, rPScore, hScorePName, remainingTime, endedTime, gameId, moleIndexs);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::WhackAMole_WhackAMoleData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::WhackAMole_WhackAMoleData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::WhackAMole_GameState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentLevelIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TotalScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BestScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RightPlayerScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HighScorePlayerName", ty: "::Fusion::CodeGen::FixedStorage@129", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RemainingTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GameEndedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GameId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PickedMolesIndexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PickedMolesIndex", ty: "::Fusion::CodeGen::FixedStorage@71", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData::WhackAMole_WhackAMoleData(::GlobalNamespace::WhackAMole_GameState  _CurrentState_k__BackingField, int32_t  _CurrentLevelIndex_k__BackingField, int32_t  _CurrentScore_k__BackingField, int32_t  _TotalScore_k__BackingField, int32_t  _BestScore_k__BackingField, int32_t  _RightPlayerScore_k__BackingField, ::Fusion::CodeGen::FixedStorage@129  _HighScorePlayerName, float_t  _RemainingTime_k__BackingField, float_t  _GameEndedTime_k__BackingField, int32_t  _GameId_k__BackingField, int32_t  _PickedMolesIndexCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@71  _PickedMolesIndex) noexcept  {
this->_CurrentState_k__BackingField = _CurrentState_k__BackingField;
this->_CurrentLevelIndex_k__BackingField = _CurrentLevelIndex_k__BackingField;
this->_CurrentScore_k__BackingField = _CurrentScore_k__BackingField;
this->_TotalScore_k__BackingField = _TotalScore_k__BackingField;
this->_BestScore_k__BackingField = _BestScore_k__BackingField;
this->_RightPlayerScore_k__BackingField = _RightPlayerScore_k__BackingField;
this->_HighScorePlayerName = _HighScorePlayerName;
this->_RemainingTime_k__BackingField = _RemainingTime_k__BackingField;
this->_GameEndedTime_k__BackingField = _GameEndedTime_k__BackingField;
this->_GameId_k__BackingField = _GameId_k__BackingField;
this->_PickedMolesIndexCount_k__BackingField = _PickedMolesIndexCount_k__BackingField;
this->_PickedMolesIndex = _PickedMolesIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData::WhackAMole_WhackAMoleData()   {
}
