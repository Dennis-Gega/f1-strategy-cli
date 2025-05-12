#include "Track.h"

Track::Track(TrackID trackID) {
  TrackID = trackID;
  switch (trackID) {
    case TrackID::Melbourne:
      name = "Melbourne";
      laps = 58;
      baseLapTime = 82.0;
      tireDegMultiplier = 1.0;
      break;
    case TrackID::Shanghai:
      name = "Shanghai";
      laps = 56;
      baseLapTime = 94.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::Suzuka:
      name = "Suzuka";
      laps = 53;
      baseLapTime = 91.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Sakhir:
      name = "Sakhir";
      laps = 57;
      baseLapTime = 89.0;
      tireDegMultiplier = 1.3;
      break;
    case TrackID::Jeddah:
      name = "Jeddah";
      laps = 50;
      baseLapTime = 88.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::Miami:
      name = "Miami";
      laps = 57;
      baseLapTime = 91.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Imola:
      name = "Imola";
      laps = 63;
      baseLapTime = 85.0;
      tireDegMultiplier = 1.0;
      break;
    case TrackID::Monaco:
      name = "Monaco";
      laps = 78;
      baseLapTime = 73.0;
      tireDegMultiplier = 0.9;
      break;
    case TrackID::Barcelona:
      name = "Barcelona";
      laps = 66;
      baseLapTime = 88.0;
      tireDegMultiplier = 1.3;
      break;
    case TrackID::Montreal:
      name = "Montreal";
      laps = 70;
      baseLapTime = 75.0;
      tireDegMultiplier = 1.0;
      break;
    case TrackID::Spielberg:
      name = "Spielberg";
      laps = 71;
      baseLapTime = 65.0;
      tireDegMultiplier = 1.0;
      break;
    case TrackID::Silverstone:
      name = "Silverstone";
      laps = 52;
      baseLapTime = 87.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Spa:
      name = "Spa";
      laps = 44;
      baseLapTime = 101.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::Budapest:
      name = "Budapest";
      laps = 70;
      baseLapTime = 78.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Zandvoort:
      name = "Zandvoort";
      laps = 72;
      baseLapTime = 72.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::Monza:
      name = "Monza";
      laps = 53;
      baseLapTime = 79.0;
      tireDegMultiplier = 1.3;
      break;
    case TrackID::Baku:
      name = "Baku";
      laps = 51;
      baseLapTime = 100.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Singapore:
      name = "Singapore";
      laps = 62;
      baseLapTime = 105.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::Austin:
      name = "Austin";
      laps = 56;
      baseLapTime = 93.0;
      tireDegMultiplier = 1.2;
      break;
    case TrackID::MexicoCity:
      name = "Mexico City";
      laps = 71;
      baseLapTime = 78.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::SaoPaulo:
      name = "Sao Paulo";
      laps = 71;
      baseLapTime = 71.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::LasVegas:
      name = "Las Vegas";
      laps = 50;
      baseLapTime = 90.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::Lusail:
      name = "Lusail";
      laps = 57;
      baseLapTime = 88.0;
      tireDegMultiplier = 1.1;
      break;
    case TrackID::YasMarina:
      name = "Yas Marina";
      laps = 58;
      baseLapTime = 90.0;
      tireDegMultiplier = 1.1;
      break;
    default:
      name = "Unknown";
      laps = 0;
      baseLapTime = 0.0;
      tireDegMultiplier = 1.0;
      break;
  }
}

const char* Track::getName() { return name; }
int Track::getLaps() { return laps; }
double Track::getBaseLapTime() { return baseLapTime; }
double Track::getTireDegMultiplier() { return tireDegMultiplier; }
