#pragma once
// IWYU pragma private; include "Viveport/UserStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__UserStats_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Leaderboard_def.hpp"
#include "Viveport/zzzz__Locale_def.hpp"
#include "Viveport/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__UserStats_AchievementDisplayAttribute_def.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardDiaplayType_def.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardRequestType_def.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardScoreMethod_def.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardSortMethod_def.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardTimeRange_def.hpp"
//  Writing Method size for method: ::Viveport::UserStats.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::UserStats::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4d5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*)>(&::Viveport::UserStats::IsReady)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b4d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.DownloadStatsIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::UserStats::DownloadStatsIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadStatsIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.DownloadStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*)>(&::Viveport::UserStats::DownloadStats)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b4db04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadStats", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Viveport::UserStats::GetStat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, float_t)>(&::Viveport::UserStats::GetStat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4df74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::Viveport::UserStats::SetStat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::Viveport::UserStats::SetStat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.UploadStatsIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::UserStats::UploadStatsIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadStatsIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.UploadStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*)>(&::Viveport::UserStats::UploadStats)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b4e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadStats", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Viveport::UserStats::GetAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetAchievementUnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::UserStats::GetAchievementUnlockTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementUnlockTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetAchievementIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Viveport::UserStats::GetAchievementIcon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetAchievementDisplayAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::UserStats_AchievementDisplayAttribute)>(&::Viveport::UserStats::GetAchievementDisplayAttribute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_AchievementDisplayAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetAchievementDisplayAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::UserStats_AchievementDisplayAttribute, ::Viveport::Locale)>(&::Viveport::UserStats::GetAchievementDisplayAttribute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_AchievementDisplayAttribute>(), ::i2c::type_of<::Viveport::Locale>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.SetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::UserStats::SetAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.ClearAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::UserStats::ClearAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4ecd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.DownloadLeaderboardScoresIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::UserStats::DownloadLeaderboardScoresIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadLeaderboardScoresIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.DownloadLeaderboardScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*, ::StringW, ::GlobalNamespace::UserStats_LeaderBoardRequestType, ::GlobalNamespace::UserStats_LeaderBoardTimeRange, int32_t, int32_t)>(&::Viveport::UserStats::DownloadLeaderboardScores)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5b4edbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadLeaderboardScores", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_LeaderBoardRequestType>(), ::i2c::type_of<::GlobalNamespace::UserStats_LeaderBoardTimeRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.UploadLeaderboardScoreIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::UserStats::UploadLeaderboardScoreIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4d76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadLeaderboardScoreIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.UploadLeaderboardScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*, ::StringW, int32_t)>(&::Viveport::UserStats::UploadLeaderboardScore)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5b4f2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetLeaderboardScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Leaderboard* (*)(int32_t)>(&::Viveport::UserStats::GetLeaderboardScore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4f698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetLeaderboardScoreCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Viveport::UserStats::GetLeaderboardScoreCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardScoreCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetLeaderboardSortMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserStats_LeaderBoardSortMethod (*)()>(&::Viveport::UserStats::GetLeaderboardSortMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats.GetLeaderboardDisplayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserStats_LeaderBoardDiaplayType (*)()>(&::Viveport::UserStats::GetLeaderboardDisplayType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4faec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::UserStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::UserStats::*)()>(&::Viveport::UserStats::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4fbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::UserStats::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::UserStats*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::UserStats::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::UserStats*>();
}
inline void Viveport::UserStats::setStaticF_downloadStatsIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "downloadStatsIl2cppCallback", ::Viveport::UserStats*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::UserStats::getStaticF_downloadStatsIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "downloadStatsIl2cppCallback", ::Viveport::UserStats*>();
}
inline void Viveport::UserStats::setStaticF_uploadStatsIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "uploadStatsIl2cppCallback", ::Viveport::UserStats*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::UserStats::getStaticF_uploadStatsIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "uploadStatsIl2cppCallback", ::Viveport::UserStats*>();
}
inline void Viveport::UserStats::setStaticF_downloadLeaderboardScoresIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "downloadLeaderboardScoresIl2cppCallback", ::Viveport::UserStats*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::UserStats::getStaticF_downloadLeaderboardScoresIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "downloadLeaderboardScoresIl2cppCallback", ::Viveport::UserStats*>();
}
inline void Viveport::UserStats::setStaticF_uploadLeaderboardScoreIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "uploadLeaderboardScoreIl2cppCallback", ::Viveport::UserStats*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::UserStats::getStaticF_uploadLeaderboardScoreIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "uploadLeaderboardScoreIl2cppCallback", ::Viveport::UserStats*>();
}
inline void Viveport::UserStats::IsReadyIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::UserStats::IsReady(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline void Viveport::UserStats::DownloadStatsIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadStatsIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::UserStats::DownloadStats(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadStats", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline int32_t Viveport::UserStats::GetStat(::StringW  name, int32_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name, defaultValue);
}
inline float_t Viveport::UserStats::GetStat(::StringW  name, float_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name, defaultValue);
}
inline void Viveport::UserStats::SetStat(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void Viveport::UserStats::SetStat(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline void Viveport::UserStats::UploadStatsIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadStatsIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::UserStats::UploadStats(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadStats", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline bool Viveport::UserStats::GetAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::UserStats::GetAchievementUnlockTime(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementUnlockTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline ::StringW Viveport::UserStats::GetAchievementIcon(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName);
}
inline ::StringW Viveport::UserStats::GetAchievementDisplayAttribute(::StringW  pchName, ::GlobalNamespace::UserStats_AchievementDisplayAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_AchievementDisplayAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName, attr);
}
inline ::StringW Viveport::UserStats::GetAchievementDisplayAttribute(::StringW  pchName, ::GlobalNamespace::UserStats_AchievementDisplayAttribute  attr, ::Viveport::Locale  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_AchievementDisplayAttribute>(), ::i2c::type_of<::Viveport::Locale>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName, attr, locale);
}
inline int32_t Viveport::UserStats::SetAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::UserStats::ClearAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline void Viveport::UserStats::DownloadLeaderboardScoresIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadLeaderboardScoresIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::UserStats::DownloadLeaderboardScores(::Viveport::StatusCallback*  callback, ::StringW  pchLeaderboardName, ::GlobalNamespace::UserStats_LeaderBoardRequestType  eLeaderboardDataRequest, ::GlobalNamespace::UserStats_LeaderBoardTimeRange  eLeaderboardDataTimeRange, int32_t  nRangeStart, int32_t  nRangeEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"DownloadLeaderboardScores", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UserStats_LeaderBoardRequestType>(), ::i2c::type_of<::GlobalNamespace::UserStats_LeaderBoardTimeRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, pchLeaderboardName, eLeaderboardDataRequest, eLeaderboardDataTimeRange, nRangeStart, nRangeEnd);
}
inline void Viveport::UserStats::UploadLeaderboardScoreIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadLeaderboardScoreIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::UserStats::UploadLeaderboardScore(::Viveport::StatusCallback*  callback, ::StringW  pchLeaderboardName, int32_t  nScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, pchLeaderboardName, nScore);
}
inline ::Viveport::Leaderboard* Viveport::UserStats::GetLeaderboardScore(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Leaderboard*>(nullptr, ___internal_method, index);
}
inline int32_t Viveport::UserStats::GetLeaderboardScoreCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardScoreCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::UserStats_LeaderBoardSortMethod Viveport::UserStats::GetLeaderboardSortMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserStats_LeaderBoardSortMethod>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::UserStats_LeaderBoardDiaplayType Viveport::UserStats::GetLeaderboardDisplayType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserStats_LeaderBoardDiaplayType>(nullptr, ___internal_method);
}
inline void Viveport::UserStats::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::UserStats*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::UserStats* Viveport::UserStats::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::UserStats*>());
}
// Ctor Parameters []
constexpr ::Viveport::UserStats::UserStats()   {
}
